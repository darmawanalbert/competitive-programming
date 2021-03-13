#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>

using namespace std;
typedef vector<int> vi;
int st[400005];
int arr[100005];

int getLeft(int idx) {return idx << 1;}
int getRight(int idx) {return (idx << 1) + 1;}

void init(int idx, int kiri, int kanan) {
	if (kiri==kanan) st[idx] = kiri;
	else {
		init(getLeft(idx),kiri,(kiri+kanan)/2);
		init(getRight(idx),((kiri+kanan)/2)+1,kanan);
		int p1 = st[getLeft(idx)];
		int p2 = st[getRight(idx)];
		if (arr[p1]<=arr[p2]) st[idx] = p1;
		else st[idx] = p2;
	}
}

int rmq(int idx,int kiri,int kanan,int i,int j) {
	if (i>kanan || j<kiri) return -1;
	if (kiri>= i && kanan<=j) return st[idx];
	
	int p1 = rmq(getLeft(idx),kiri,(kiri+kanan)/2,i,j);
	int p2 = rmq(getRight(idx),((kiri+kanan)/2)+1,kanan,i,j);
	
	if (p1==-1) return p2;
	if (p2==-1) return p1;
	if (arr[p1]<=arr[p2]) return p1;
	else return p2;
}

int main(void) {
	int n,q,i,j,temp;
	scanf("%d",&n);
	for (int ctr=0;ctr<n;ctr++) scanf("%d",&arr[ctr]);
	memset(st,0,sizeof(st));
	init(1,0,n-1);
	scanf("%d",&q);
	for (int ctr=0;ctr<q;ctr++) {
		scanf("%d %d",&i,&j);
		printf("%d\n",arr[rmq(1,0,n-1,i,j)]);
	}
	
	return 0;
}
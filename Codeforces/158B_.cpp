#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;
map<int,int> mmap;
int main() {
	int n,temp;
	mmap.clear();
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		mmap[temp]++;
	}
	int acc = 0;
	acc+=mmap[4];
	acc+=mmap[3];
	mmap[1]-=mmap[3];
	
	if (mmap[2]%2==0) acc+=(mmap[2]/2);
	else {
		acc+=((mmap[2]/2)+1);
		mmap[1]-=2;
	}
	if (mmap[1]>0) {
		if (mmap[1]%4==0) acc+=(mmap[1]/4);
		else acc+=((mmap[1]/4)+1);
	}
	printf("%d\n",acc);
	
	return 0;
}
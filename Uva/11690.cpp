#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 10000;

int p[maks+5];
int weight[maks+5];
int price[maks+5];

int find(int x) { return (p[x]==x)?x:(p[x]=find(p[x]));}

void merge(int x,int y) {
	int fx = find(x);
	int fy = find(y);
	if (weight[fx]<weight[fy]) {
		p[fx] = p[fy];
		price[p[fx]]+=price[fx];
		weight[fy]+=weight[fx];
	}
	else {
		p[fy] = p[fx];
		price[p[fy]]+=price[fy];
		weight[fx]+=weight[fy];
	}
}


int main() {
	int t,n,e,x,y;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&n,&e);
		for (int i=0;i<n;i++) {
			p[i] = i;
			weight[i] = 1;
			scanf("%d",&price[i]);
		}
		for (int i=0;i<e;i++) {
			scanf("%d %d",&x,&y);
			if (find(x)!=find(y)) {
				merge(x,y);
			}
		}
		bool toggle = true;
		for (int i=0;i<n;i++) {
			int temp = find(i);
			if (price[temp]!=0) {
				toggle =false;
				break;
			}
		}
		if (toggle) printf("POSSIBLE\n");
		else printf("IMPOSSIBLE\n");
	}
	return 0;
}
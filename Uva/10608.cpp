#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 30000;
int p[maks+5];
int weight[maks+5];
int acc;
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {
	int find_x = find(x);
	int find_y = find(y);
	if (weight[find_x] < weight[find_y]) {
		p[find_x] = p[find_y];
		weight[find_y]+=weight[find_x];
		if (weight[find_y]>acc) acc = weight[find_y];
	}
	else {
		p[find_y] = p[find_x];
		weight[find_x] += weight[find_y];
		if (weight[find_x]>acc) acc = weight[find_x];
	}	
}

int main() {
	int t,n,e,x,y;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&n,&e);
		for (int i=1;i<=n;i++) {
			p[i] = i;
			weight[i] = 1;
		}
		acc = 1;
		for (int i=0;i<e;i++) {
			scanf("%d %d",&x,&y);
			if (find(x)!=find(y)) {
				merge(x,y);
			}
		}
		printf("%d\n",acc);

	}
	return 0;
}
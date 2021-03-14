#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
using namespace std;
const int maks = 50000;

int p[maks+5];
int weight[maks+5];
set<int> sset;
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {
	int find_x = find(x);
	int find_y = find(y);
	if (weight[find_x]<weight[find_y]) {
		p[find_x] = p[find_y];
		weight[find_y]+=weight[find_x];
	}
	else {
		p[find_y] = p[find_x];
		weight[find_x]+=weight[find_y];
	}
	
}

int main() {
	int n,e,x,y;
	int ctr = 1;
	while (scanf("%d %d",&n,&e)!=EOF) {
		sset.clear();
		if (n==0 && e==0) break;
		for (int i=1;i<=n;i++) {
			p[i] = i;
			weight[i] = 1;
		}
		for (int i=0;i<e;i++) {
			scanf("%d %d",&x,&y);
			if (find(x)!=find(y)) merge(x,y);
		}
		for (int i=1;i<=n;i++) {
			sset.insert(find(i));
		}
		printf("Case %d: ",ctr);
		ctr++;
		cout << sset.size() << endl;
	}
	
	return 0;
}
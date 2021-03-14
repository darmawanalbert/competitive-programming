#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
using namespace std;
const int maks = 5000;
int p[maks+5];
int weight[maks+5];
int acc;
map<string,int> mmap;
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {
	int find_x = find(x);
	int find_y = find(y);
	if (weight[find_x]<weight[find_y]) {
		p[find_x] = p[find_y];
		weight[find_y]+=weight[find_x];
		if (weight[find_y]>acc) acc = weight[find_y];
	}
	else {
		p[find_y] = p[find_x];
		weight[find_x]+=weight[find_y];
		if (weight[find_x]>acc) acc = weight[find_x];
	}
}


int main() {
	int n,e;
	while (scanf("%d %d",&n,&e)!=EOF) {
		if (n==0 && e==0) break;
		string line,line1,line2;
		mmap.clear();
		for (int i=1;i<=n;i++) {
			p[i] = i;
			weight[i] = 1;
		}
		acc = 1;
		int ctr = 1;
		for (int i=0;i<n;i++) {
			cin >> line;
			if (mmap.find(line)==mmap.end()) {
				mmap[line] = ctr;
				ctr++;
			}
		}
		for (int i=0;i<e;i++) {
			cin >> line1 >> line2;
			if (find(mmap[line1])!=find(mmap[line2])) merge(mmap[line1],mmap[line2]);
		}
		printf("%d\n",acc);
	}
	return 0;
}
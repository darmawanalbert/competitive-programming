#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>

using namespace std;
const int maks = 200005;
int p[maks];
int amount[maks];
void init() {
	for (int i=0;i<maks;i++) {
		p[i] = i;
		amount[i] = 1;
	}
}
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {
	if (find(x)!=find(y)) amount[find(x)]+=amount[find(y)];
	p[find(y)]=p[find(x)];
}
map<string,int> mmap;

int main() {
	string u,v;
	int t,n;
	scanf("%d",&t);
	while (t--) {
		int ctr = 1;
		init();
		mmap.clear();
		scanf("%d",&n);
		while (n--) {
			cin >> u >> v;
			if (mmap.find(u)==mmap.end()) {
				mmap[u] = ctr;
				ctr++;
			}
			if (mmap.find(v)==mmap.end()) {
				mmap[v] = ctr;
				ctr++;
			}
			merge(mmap[u],mmap[v]);
			printf("%d\n",amount[find(mmap[u])]);
		}
	}
	return 0;
}
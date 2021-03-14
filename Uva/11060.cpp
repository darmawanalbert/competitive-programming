#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
#include <vector>
#define pb push_back
using namespace std;

bool visited[105];
vector< vector<int> > adj;
vector<int> topoSort;
string a[105];
map<string,int> mmap;
void dfs(int idx) {
	visited[idx] = true;
	if (adj[idx].size()==0) topoSort.pb(idx);
	else {
		for (int i=0;i<adj[idx].size();i++) {
			if (!visited[adj[idx][i]]) dfs(adj[idx][i]);
		}
		topoSort.pb(idx);
	}
	
}

int main() {
	string line,kiri,kanan;
	int n,rel;
	int idx;
	int ctr = 0;
	while (scanf("%d",&n)!=EOF) {
		mmap.clear();
		topoSort.clear();
		adj.assign(n+5,vector<int>());
		memset(visited,false,sizeof(visited));
		for (int i=0;i<n;i++) {
			cin >> line;
			if (mmap.find(line)==mmap.end()) {
				mmap[line] = i;
				a[i] = line;
			}
		}
		scanf("%d",&rel);
		for (int i=0;i<rel;i++) {
			cin >> kiri >> kanan;
			adj[mmap[kanan]].pb(mmap[kiri]);
		}
		for (int i=0;i<n;i++) {
			if (!visited[i]) dfs(i);
		}
		ctr++;
		printf("Case #%d: Dilbert should drink beverages in this order:",ctr);
		for (int i=0;i<topoSort.size();i++) cout << " " << a[topoSort[i]];
		printf(".\n\n");
	}
	
	return 0;
}
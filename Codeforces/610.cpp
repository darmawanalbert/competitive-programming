#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <set>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;
typedef pair<int,int> ii;
const int maks = 1000;
int dfs_num[maks+5];
int dfs_low[maks+5];
int dfs_parent[maks+5];
int counter,root,children;
vector<int> adj[maks+5];
bool edges[maks+5][maks+5];
void tarjan(int u) {
	dfs_num[u] = dfs_low[u] = counter++;
	for (int i=0;i<adj[u].size();i++) {
		int v = adj[u][i];
		if (dfs_num[v]==-1) {
			dfs_parent[v] = u;
			if (u==root) children++;
			tarjan(v);
			if (dfs_low[v]>dfs_num[u]) edges[u][v] = edges[v][u] = true;
			else if (!edges[v][u]) edges[u][v] = true;
			dfs_low[u] = min(dfs_low[u],dfs_low[v]);
		}
		else if (v!=dfs_parent[u]) {
			dfs_low[u] = min(dfs_low[u],dfs_num[v]);
			if (!edges[v][u]) edges[u][v] = true;
		}
	}
}


int main() {
	int n,e;
	int kiri,kanan;
	int idx = 1;
	while (scanf("%d %d",&n,&e)!=EOF) {
		if (n==0 && e==0) break;
		memset(dfs_num,-1,sizeof(dfs_num));
		memset(dfs_low,0,sizeof(dfs_low));
		memset(dfs_parent,0,sizeof(dfs_parent));
		memset(edges,false,sizeof(edges));
		counter = 0;
		for (int i=1;i<=n;i++) adj[i].clear();
		for (int i=0;i<e;i++) {
			scanf("%d %d",&kiri,&kanan);
			adj[kiri].pb(kanan);
			adj[kanan].pb(kiri);
		}
		for (int i=1;i<=n;i++) {
			if (dfs_num[i]==-1) {
				root = i;
				children = 0;
				tarjan(i);
			}
		}
		cout << idx++ << endl << endl;
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) {
				if (edges[i][j]) cout << i << " " << j << endl;
			}
		}
		cout << "#" << endl;
	}	
	return 0;
}
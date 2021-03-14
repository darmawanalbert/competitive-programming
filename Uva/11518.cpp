#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;

vector<int> adj[10005];
bool visited[10005];
int t,n,m,l,kiri,kanan,z;
int acc;

void dfs(int u) {
	visited[u] = true;
	acc++;
	for (int i=0;i<adj[u].size();i++) {
		int v = adj[u][i];
		if (!visited[v]) dfs(v);
	}
}

int main() {
	scanf("%d",&t);
	while (t--) {
		acc = 0;
		scanf("%d %d %d",&n,&m,&l);
		memset(visited,false,sizeof(visited));
		for (int i=1;i<=n;i++) adj[i].clear();
		for (int i=0;i<m;i++) {
			scanf("%d %d",&kiri,&kanan);
			adj[kiri].pb(kanan);
		}
		for (int i=0;i<l;i++) {
			scanf("%d",&z);
			if (!visited[z]) dfs(z);
		}
		printf("%d\n",acc);
	}
	return 0;
}
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdio>
#include <vector>
#define pb push_back
using namespace std;

vector<int> adj[305];
int color[305];
bool isClaw;

void dfs(int u,int col) {
	color[u] = col;
	for (int i=0;i<adj[u].size();i++) {
		int v = adj[u][i];
		if (color[v]==-1) dfs(v,(col+1)%2);
		if (color[u]==color[v]) {
			isClaw = false;
			break;
		}
	}
}

int main() {
	int v;
	int kiri,kanan;
	while (scanf("%d",&v)!=EOF) {
		if (v==0) break;
		memset(color,-1,sizeof(color));
		for (int i=1;i<=v;i++) adj[i].clear();
		isClaw = true;
		while (true) {
			scanf("%d %d",&kiri,&kanan);
			if (kiri==0 && kanan==0) break;
			adj[kiri].pb(kanan);
			adj[kanan].pb(kiri);
		}
		for (int i=1;i<=v;i++) {
			if (color[i]==-1) dfs(v,0);
		}
		if (isClaw) printf("YES\n");
		else printf("NO\n");
	}
	
}
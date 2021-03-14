#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#define pb push_back
using namespace std;

vector<int> adj[205];
int color[205];
int acc,accOne,accZero;
bool isBipartite;
void dfs(int u,int col) {
	color[u] = col;
	if (col==1) accOne++;
	else if (col==0) accZero++;
	for (int i=0;i<adj[u].size();i++) {
		int v = adj[u][i];
		if (color[v]==-1) dfs(v,(col+1)%2);
		if (color[v]==color[u]) {
			isBipartite = false;
		}
	}
}

int main() {
	int t,v,e,kiri,kanan;
	scanf("%d",&t);
	for (int ite=1;ite<=t;ite++) {
		scanf("%d %d",&v,&e);
		isBipartite = true;
		accOne = 0;
		accZero = 0;
		acc = 0;
		memset(color,-1,sizeof(color));
		for (int i=0;i<v;i++) adj[i].clear();
		for (int i=0;i<e;i++) {
			scanf("%d %d",&kiri,&kanan);
			adj[kiri].pb(kanan);
			adj[kanan].pb(kiri);
		}
		for (int i=0;i<v;i++) {
			if (color[i]==-1) {
				if (adj[i].size()==0) acc++;
				else {
					dfs(i,0);
					acc+=min(accOne,accZero);
					accOne = 0;
					accZero = 0;
				}
			}
		}
		if (e==0) printf("%d\n",v);
		else {
			if (isBipartite) {
				printf("%d\n",acc);
			}
			else printf("-1\n");
		}
		
	}
	return 0;
}
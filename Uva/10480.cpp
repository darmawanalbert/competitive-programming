#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <set>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std;
const int maks = 50;
const int INF = 1e9;

int n,e,kiri,kanan,w;
int res[maks+5][maks+5];
int p[maks+5];
int dist[maks+5];
int mf,f,s,t;
bool visited[maks+5];
bool source[maks+5];
vector<int> adj[maks+5];
void augment(int v,int minEdge) {
	if (v==s) {
		f = minEdge;
		return;
	}
	else if (p[v]!=-1) {
		augment(p[v],min(minEdge,res[p[v]][v]));
		res[p[v]][v]-=f;
		res[v][p[v]]+=f;
	}
}


int main() {
	while (scanf("%d %d",&n,&e)!=EOF) {
		if (n==0 && e==0) break;
		for (int i=1;i<=n;i++) adj[i].clear();
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&kiri,&kanan,&w);
			res[kiri][kanan]=w;
			res[kanan][kiri]=w;
			adj[kiri].pb(kanan);
			adj[kanan].pb(kiri);
		}
		s = 1;
		t = 2;
		mf = 0;
		while (true) {
			f = 0;
			queue<int> q;
			q.push(s);
			for (int i=1;i<=n;i++) dist[i] = INF;
			dist[s] = 0;
			memset(p,-1,sizeof(p));
			while (!q.empty()) {
				int u = q.front();
				q.pop();
				if (u==t) break;
				for (int i=0;i<adj[u].size();i++) {
					int v = adj[u][i];
					if (res[u][v]>0 && dist[v]==INF) {
						dist[v] = dist[u]+1;
						p[v] = u;
						q.push(v);
					}
				}
			}
			augment(t,INF);
			if (f==0) break;
			mf+=f;
		}
		memset(source,false,sizeof(source));
		memset(visited,false,sizeof(visited));
		queue<int> que;
		que.push(s);
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			source[u] = true;
			for (int i=0;i<adj[u].size();i++) {
				int v = adj[u][i];
				if (res[u][v]>0 && !source[v]) que.push(v);
			}
		}
		que.push(s);
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			if (visited[u]) continue;
			visited[u] = true;
			for (int i=0;i<adj[u].size();i++) {
				int v = adj[u][i];
				if (source[v]) {
					if (!visited[v]) que.push(v);
				}
				else printf("%d %d\n",u,v);
			}
		}
		printf("\n");
	}
	return 0;
}
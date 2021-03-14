#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <vector>
#include <map>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
const int maks = 1000;
const int INF = 1e9;
vector<int> adj[maks+5];
int dist[maks+5];

int main() {
	int tc;
	int n,e;
	int kiri,kanan;
	scanf("%d",&tc);
	for (int ctr=1;ctr<=tc;ctr++) {
		if (ctr>1) printf("\n");
		scanf("%d %d",&n,&e);
		for (int i=0;i<n;i++) adj[i].clear();
		for (int i=0;i<n;i++) dist[i] = INF;
		dist[0] = 0;
		for (int i=0;i<e;i++) {
			scanf("%d %d",&kiri,&kanan);
			adj[kiri].pb(kanan);
			adj[kanan].pb(kiri);
		}
		queue<int> que;
		que.push(0);
		while (!que.empty()) {
			int u = que.front();
			que.pop();
			for (int i=0;i<adj[u].size();i++) {
				int v = adj[u][i];
				if (dist[v]==INF) {
					dist[v] = dist[u]+1;
					que.push(v);
				}
			}
		}
		for (int i=1;i<n;i++) printf("%d\n",dist[i]);
	}
}
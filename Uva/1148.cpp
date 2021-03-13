#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#define pb push_back
using namespace std;
const int maks = 100000;
const int INF = 1e9;
vector<int> adj[maks+5];
int dist[maks+5];
int main() {
	int tc;
	int n,kanan;
	int c,num;
	int s,t;
	scanf("%d",&tc);
	for (int ctr=1;ctr<=tc;ctr++) {
		if (ctr>1) printf("\n");
		scanf("%d",&n);
		for (int i=0;i<n;i++) adj[i].clear();
		for (int i=0;i<n;i++) {
			scanf("%d %d",&c,&num);
			for (int j=0;j<num;j++) {
				scanf("%d",&kanan);
				adj[c].pb(kanan);
			}
 		}
		scanf("%d %d",&s,&t);
		for (int i=0;i<n;i++) dist[i] = INF;
		dist[s] = 0;
		queue<int> que;
		que.push(s);
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
		printf("%d %d %d\n",s,t,dist[t]-1);
	}
	return 0;
}
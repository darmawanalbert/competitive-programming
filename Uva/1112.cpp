#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <vector>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
typedef pair<int,int> ii;
const int maks = 100;
const int INF = 1e9;
vector<ii> adj[maks+5];
int dist[maks+5];
priority_queue<ii, vector<ii>, greater<ii> > pq;
int main() {
	int kiri,kanan,w;
	int n,s,time;
	int e;
	int tc;
	scanf("%d",&tc);
	for (int ctr=1;ctr<=tc;ctr++) {
		scanf("%d",&n);
		scanf("%d",&s);
		scanf("%d",&time);
		for (int i=1;i<=n;i++) adj[i].clear();
		for (int i=1;i<=n;i++) dist[i] = INF;
		dist[s] = 0;
		scanf("%d",&e);
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&kiri,&kanan,&w);
			adj[kanan].pb(mp(kiri,w));
		}
		while (!pq.empty()) pq.pop();
		pq.push(mp(0,s));
		while (!pq.empty()) {
			ii front = pq.top();
			pq.pop();
			int d = front.ff;
			int u = front.ss;
			if (d>dist[u]) continue;
			for (int i=0;i<adj[u].size();i++) {
				ii cur = adj[u][i];
				if (dist[cur.ff]>cur.ss + dist[u]) {
					dist[cur.ff] = cur.ss + dist[u];
					pq.push(mp(dist[cur.ff],cur.ff));
				}
			}
		}
		int tot = 0;
		for (int i=1;i<=n;i++) {
			if (dist[i]<=time) tot++;
		}
		if (ctr>1) cout << endl;
		cout << tot << endl;
		
	}
	return 0;
}
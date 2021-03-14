#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <queue>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std;
const int INF = 1e9;
typedef pair<int,int> ii;
typedef vector<ii> vii;

vii adj[20005];
int dist[20005];
priority_queue<ii, vector<ii>, greater<ii> > pq;
int main() {
	int tc,n,e,source,destination,kiri,kanan,berat;
	scanf("%d",&tc);
	for (int ctr=1;ctr<=tc;ctr++) {
		while (!pq.empty()) pq.pop();
		scanf("%d %d %d %d",&n,&e,&source,&destination);
		for (int i=0;i<n;i++) dist[i] = INF;
		dist[source] = 0;
		for (int i=0;i<n;i++) adj[i].clear();
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&kiri,&kanan,&berat);
			adj[kiri].pb(mp(kanan,berat));
			adj[kanan].pb(mp(kiri,berat));
		}
		pq.push(mp(0,source));
		while (!pq.empty()) {
			ii front = pq.top();
			pq.pop();
			int d = front.ff;
			int u = front.ss;
			if (d>dist[u]) continue;
			for (int j=0;j<adj[u].size();j++) {
				ii edge = adj[u][j];
				if (dist[u] + edge.ss < dist[edge.ff]) {
					dist[edge.ff] = dist[u] + edge.ss;
					pq.push(mp(dist[edge.ff],edge.ff));
				}
			}
		}
		printf("Case #%d: ",ctr);
		//cout << dist[destination] << endl;
		if (dist[destination]==INF) printf("unreachable\n");
		else printf("%d\n",dist[destination]);
	}
	
	return 0;
}
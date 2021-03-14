#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std;

const int INF = 1e9;
vector<int> dist;
vector< vector< pair<int,int> > > adj;
priority_queue< pair<int,int>,vector< pair<int,int> >,greater< pair<int,int> > > pq;

int main() {
	int t,iu,iv,iw,e,s,n,in;
	scanf("%d",&in);
	for (int ctr=1;ctr<=in;ctr++) {
		scanf("%d %d %d %d",&n,&e,&s,&t);
		while (!pq.empty()) pq.pop();
		dist.assign(n+5,INF);
		adj.assign(n+5,vector< pair<int,int> >());
		dist[s] = 0;
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&iu,&iv,&iw);
			adj[iu].pb(mp(iv,iw));
		}
		pq.push(mp(0,s));
		while (!pq.empty()) {
			pair<int,int> front = pq.top();
			pq.pop();
			int d = front.first;
			int u = front.second;
			if (d>dist[u]) continue;
			for (int j=0;j<adj[u].size();j++) {
				pair<int,int> edge = adj[u][j];
				if (dist[u]+edge.ss < dist[edge.ff]) {
					dist[edge.ff] = dist[u]+edge.ss;
					pq.push(mp(dist[edge.ff],edge.ff));
				}
			}
		}
		printf("Case #%d: ",ctr);
		if (dist[t]==INF) printf("unreachable\n");
		else printf("%d\n",dist[t]);
	}
	return 0;
}
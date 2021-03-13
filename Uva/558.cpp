#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;
const int INF = 1e9;
vector< vector< pair<int,int> > > adjList;
vector<int> dist;
pair<int,int> currentEdge;
int main() {
	int t,u,v,w,n,e;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&n,&e);
		adjList.assign(n+5,vector< pair<int,int> >());
		dist.assign(n+5,INF);
		dist[0] = 0;
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&u,&v,&w);
			adjList[u].pb(mp(v,w));
		}
		for (int i=0;i<n-1;i++) {
			for (int u=0;u<n;u++) {
				for (int j=0;j<adjList[u].size();j++) {
					currentEdge = adjList[u][j];
					dist[currentEdge.ff] = min(dist[currentEdge.ff],dist[u]+currentEdge.ss);
				}
			}
		}
		bool hasNegativeCycle = false;
		for (int u=0;u<n;u++) {
			for (int j=0;j<adjList[u].size();j++) {
				currentEdge = adjList[u][j];
				if (dist[currentEdge.ff]>dist[u]+currentEdge.ss) {
					hasNegativeCycle = true;
				}
			}
		}
		if (hasNegativeCycle) printf("possible\n");
		else printf("not possible\n");
		
		
	}
	return 0;
}
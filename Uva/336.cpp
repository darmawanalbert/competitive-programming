#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <queue>
#include <map>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

using namespace std;
const int maks = 60;
const int INF = 1e9;
map<int,int> mmap;
vector<int> adj[maks+5];
int dist[maks+5];
int main() {
	int s,ttl;
	int e;
	int ctr = 1;
	int kiri,kanan;
	while (scanf("%d",&e)!=EOF) {
		if (e==0) break;
		mmap.clear();
		for (int i=0;i<=maks;i++) adj[i].clear();
		int idx = 1;
		for (int i=0;i<e;i++) {
			scanf("%d %d",&kiri,&kanan);
			if (mmap.find(kiri)==mmap.end()) {
				mmap[kiri] = idx++;
			}
			if (mmap.find(kanan)==mmap.end()) {
				mmap[kanan] = idx++;
			}
			adj[mmap[kiri]].pb(mmap[kanan]);
			adj[mmap[kanan]].pb(mmap[kiri]);
		}
		int totalNode = idx-1;
		while (scanf("%d %d",&s,&ttl)!=EOF) {
			if (s==0 && ttl==0) break;
			for (int i=1;i<=totalNode;i++) dist[i] = INF;
			int origin = mmap[s];
			dist[origin] = 0;
			queue<int> que;
			que.push(origin);
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
			int tot = 0;
			for (int i=1;i<=totalNode;i++) {
				if (dist[i]>ttl) tot++;
			}
			printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",ctr++,tot,s,ttl);
		}
	}
	return 0;
}
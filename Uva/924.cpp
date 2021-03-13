#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
const int maks = 2500;
const int INF = 1e9;
map<int,int> mmap;
vector<int> adj[maks+5];
int dist[maks+5];

int main() {
	int n;
	int temp,num;
	scanf("%d",&n);
	for (int i=0;i<n;i++) adj[i].clear();
	for (int i=0;i<n;i++) {
		scanf("%d",&num);
		while (num--) {
			scanf("%d",&temp);
			adj[i].pb(temp);
		}
	}
	int t,s;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&s);
		for (int i=0;i<n;i++) dist[i] = INF;
		dist[s] = 0;
		mmap.clear();
		if (adj[s].size()>0) {
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
			for (int i=0;i<n;i++) {
				if (dist[i]!=INF && i!=s) mmap[dist[i]]++;
			}
			int m = 0;
			int d = 0;
			for (map<int,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
				if (it->second > m ) {
					m = it->second;
					d = it->first;
				}
			}
			cout << m << " " << d << endl;
		}
		else cout << "0" << endl;
	}
}
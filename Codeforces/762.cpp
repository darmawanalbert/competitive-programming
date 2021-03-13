#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <utility>
#include <map>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair

using namespace std;
const int INF = 1e9;
map<string,int> dist;
map<string, vector<string> > adj;
int main() {
	int n;
	string s,t;
	string kiri,kanan;
	int idx = 1;
	while (scanf("%d",&n)!=EOF) {
		adj.clear();
		dist.clear();
		for (int i=0;i<n;i++) {
			cin >> kiri >> kanan;
			adj[kiri].pb(kanan);
			adj[kanan].pb(kiri);
		}
		cin >> s >> t;
		queue<string> que;
		dist[t] = 0;
		que.push(t);
		while (!que.empty()) {
			string u = que.front();
			que.pop();
			for (int i=0;i<adj[u].size();i++) {
				string v = adj[u][i];
				if (dist.find(v)==dist.end()) {
					dist[v] = dist[u]+1;
					que.push(v);
				}
			}	
		}
		if (idx>1) printf("\n");
		idx++;
		if (dist.find(s)==dist.end()) cout << "No route" << endl;
		else {
			int pos = dist[s];
			string cur = s;
			while (pos!=0) {
				for (int i=0;i<adj[cur].size();i++) {
					string v = adj[cur][i];
					if (dist[v]==pos-1) {
						cout << cur << " " << v << endl;
						cur = v;
						pos--;
					}
				}
			}
		}
	}
	return 0;
}
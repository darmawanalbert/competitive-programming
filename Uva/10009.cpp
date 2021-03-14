#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
const int maks = 26;
const int INF = 1e9;
map<string,int> mmap;
map<int,string> rev;
vector<int> adj[maks+5];
int dist[maks+5];
int main() {
	int tc;
	int e,q;
	string s,t;
	string kiri,kanan;
	scanf("%d",&tc);
	for (int ctr=1;ctr<=tc;ctr++) {
		if (ctr>1) printf("\n");
		mmap.clear();
		rev.clear();
		for (int i=0;i<=maks;i++) adj[i].clear();
		scanf("%d %d",&e,&q);
		int idx = 1;
		for (int i=0;i<e;i++) {
			cin >> kiri >> kanan;
			if (mmap.find(kiri)==mmap.end()) {
				mmap[kiri] = idx;
				rev[idx] = kiri;
				idx++;
			}
			if (mmap.find(kanan)==mmap.end()) {
				mmap[kanan] = idx;
				rev[idx] = kanan;
				idx++;
			}
			adj[mmap[kiri]].pb(mmap[kanan]);
			adj[mmap[kanan]].pb(mmap[kiri]);
		}
		int totalNode = idx-1;
		while (q--) {
			cin >> s >> t;
			for (int i=1;i<=totalNode;i++) dist[i] = INF;
			dist[mmap[t]] = 0;
			queue<int> que;
			que.push(mmap[t]);
			while (!que.empty()) {
				int u = que.front();
				que.pop();
				for (int i=0;i<adj[u].size();i++) {
					int v =adj[u][i];
					if (dist[v]==INF) {
						dist[v] = dist[u]+1;
						que.push(v);
					}
				}
			}
			cout << s[0];
			int pos = dist[mmap[s]];
			int cur = mmap[s];
			while (pos!=0) {
				for (int i=0;i<adj[cur].size();i++) {
					int v = adj[cur][i];
					if (dist[v]==pos-1) {
						string temp = rev[v];
						cout << temp[0];
						pos--;
						cur = v;
					}
				}
			}
			cout << endl;
		}
	}
	return 0;
}
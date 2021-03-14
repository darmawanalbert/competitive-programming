#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <vector>
#include <set>
#define pb push_back

using namespace std;
const int maks = 100;
vector<int> adj[maks+5];
int dfs_num[maks+5];
int dfs_low[maks+5];
int dfs_parent[maks+5];
bool articulation[maks+5];
int counter,root,children;
map<string,int> mmap;
map<int,string> balik;
set<string> sset;
void tarjan(int u) {
	dfs_num[u] = dfs_low[u] = counter++;
	for (int i=0;i<adj[u].size();i++) {
		int v = adj[u][i];
		if (dfs_num[v]==-1) {
			dfs_parent[v] = u;
			if (u==root) children++;
			tarjan(v);
			if (dfs_low[v]>=dfs_num[u]) articulation[u] = true;
			dfs_low[u] = min(dfs_low[u],dfs_low[v]);
		}
		else if (v!=dfs_parent[u]) dfs_low[u] = min(dfs_low[u],dfs_num[v]);
	}
}


int main() {
	int n,e;
	int ctr = 1;
	string line;
	string line1,line2;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		counter = 0;
		sset.clear();
		balik.clear();
		for (int i=1;i<=n;i++) adj[i].clear();
		memset(dfs_num,-1,sizeof(dfs_num));
		memset(dfs_low,0,sizeof(dfs_low));
		memset(dfs_parent,0,sizeof(dfs_parent));
		memset(articulation,false,sizeof(articulation));
		mmap.clear();
		for (int i=1;i<=n;i++) {
			cin >> line;
			mmap[line] = i;
			balik[i] = line;
		}
		scanf("%d",&e);
		for (int i=0;i<e;i++) {
			cin >> line1 >> line2;
			adj[mmap[line1]].pb(mmap[line2]);
			adj[mmap[line2]].pb(mmap[line1]);
		}
		for (int i=1;i<=n;i++) {
			if (dfs_num[i]==-1) {
				root = i;
				children = 0;
				tarjan(i);
				articulation[i] = (children>1);
			}
		}
		int tot = 0;
		for (int i=1;i<=n;i++) {
			if (articulation[i]) {
				tot++;
				sset.insert(balik[i]);
			}
		}
		if (ctr>1) printf("\n");
		printf("City map #%d: %d camera(s) found\n",ctr++,tot);
		for (set<string>::iterator it=sset.begin();it!=sset.end();++it) {
			cout << *it << endl;
		}
	}
	return 0;
}
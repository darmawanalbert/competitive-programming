#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <sstream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
const int maks = 100;
int counter,root,sumchildren;

int dfs_num[maks+5];
int dfs_low[maks+5];
int dfs_parent[maks+5];
bool articulation[maks+5];
vector<int> adj[maks+5];
void tarjan(int u) {
	dfs_low[u] = dfs_num[u] = counter++;
	for (int i=0;i<adj[u].size();i++) {
		int v = adj[u][i];
		if (dfs_num[v]==-1) {
			dfs_parent[v] = u;
			if (u==root) sumchildren++;
			tarjan(v);
			if (dfs_low[v]>=dfs_num[u]) articulation[u] = true;
			dfs_low[u] = min(dfs_low[u],dfs_low[v]);
		}
		else if (v != dfs_parent[u]) dfs_low[u] = min(dfs_low[u],dfs_num[v]);
 	}
}


int main() {
	int n;
	int temp;
	string line;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		getchar();
		counter = 0;
		memset(dfs_num,-1,sizeof(dfs_num));
		memset(dfs_low,0,sizeof(dfs_low));
		memset(dfs_parent,0,sizeof(dfs_parent));
		memset(articulation,false,sizeof(articulation));
		for (int i=1;i<=n;i++) adj[i].clear();
		while (true) {
			getline(cin,line);
			istringstream iss(line);
			iss >> temp;
			int origin = temp;
			if (temp==0) break;
			else {
				while (iss >> temp) {
					adj[origin].pb(temp);
					adj[temp].pb(origin);
				}
			}
		}
		for (int i=1;i<=n;i++) {
			if (dfs_num[i]==-1) {
				root = i;
				sumchildren = 0;
				tarjan(i);
				articulation[root] = (sumchildren > 1);
			}
		}
		int tot = 0;
		for (int i=1;i<=n;i++) if (articulation[i]) tot++;
		printf("%d\n",tot);
	}
	
	return 0;
}
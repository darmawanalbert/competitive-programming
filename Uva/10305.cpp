#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#define pb push_back
using namespace std;
vector<vector<int> > adjList;
vector<int> topoSort;
bool visited[105];

void dfs(int v) {
	int dest;
	visited[v] = true;
	for (int i=0;i<adjList[v].size();i++) {
		dest = adjList[v][i];
		if (!visited[dest]) dfs(dest);
	}
	topoSort.pb(v);
}

int main(void) {
	int n,e,kanan,kiri;
	while (scanf("%d %d",&n,&e)!=EOF) {
		if (n==0 && e==0) break;
		memset(visited,false,sizeof(visited));
		adjList.assign(n+5,vector<int>());
		topoSort.clear();
		for (int i=0;i<e;i++) {
			scanf("%d %d",&kiri,&kanan);
			adjList[kanan].pb(kiri);
		}
		for (int i=1;i<=n;i++) {
			if (!visited[i]) {
				dfs(i);
			}
		}
		for (int i=0;i<topoSort.size();i++) {
			if (i>0) printf(" ");
			printf("%d",topoSort[i]);
		}
		printf("\n");
	}
}
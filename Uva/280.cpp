#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;
vector<int> adj[105];
bool visited[105];
int acc;
void dfs(int vertex,bool isFirst) {
	if (!isFirst) {
		visited[vertex] = true;
		acc++;
	} 
	
	for (int i=0;i<adj[vertex].size();i++) {
		int cur = adj[vertex][i];
		if (!visited[cur]) dfs(cur,false);
	}
}

int main() {
	int n,u,startNum,start,v;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		for (int i=1;i<=n;i++) adj[i].clear();
		while (scanf("%d",&u)!=EOF) {
			if (u==0) break;
			while (scanf("%d",&v)!=EOF) {
				if (v==0) break;
				adj[u].pb(v);
			}
		}
		scanf("%d",&startNum);
		for (int i=0;i<startNum;i++) {
			memset(visited,false,sizeof(visited));
			acc = 0;
			scanf("%d",&start);
			dfs(start,true);
			printf("%d",n-acc);
			for (int i=1;i<=n;i++) {
				if (!visited[i]) printf(" %d",i);
			}
			printf("\n");
			
		}
	}
	return 0;
}
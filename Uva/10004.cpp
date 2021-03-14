#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;

vector< vector< int > > adjList;
bool toggle;
int color[205];

void dfs(int vertex,int now) {
	if (toggle) return;
	color[vertex] = now;
	for (int i=0;i<adjList[vertex].size();i++) {
		if (color[adjList[vertex][i]]==-1) dfs(adjList[vertex][i],(now+1)%2);
		if (color[adjList[vertex][i]] == color[vertex]) {
			toggle = true;
			break;
		}
	}
}

int main() {
	int n,e,u,v;
	while (scanf("%d",&n) !=EOF) {
		memset(color,-1,sizeof(color));
		if (n==0) break;
		adjList.assign(n,vector<int>());
		scanf("%d",&e);
		for (int i=0;i<e;i++) {
			scanf("%d %d",&u,&v);
			adjList[u].pb(v);
			adjList[v].pb(u);
		}
		toggle = false;
		for (int i=0;i<n;i++) {
			if (color[i]==-1) dfs(i,0);
		}
		if (toggle) printf("NOT BICOLORABLE.\n");
		else printf("BICOLORABLE.\n");
	}
	
}
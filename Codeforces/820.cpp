#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#define pb push_back
using namespace std;
const int maks = 100;
const int INF = 1e9;
int res[maks+5][maks+5];
int p[maks+5];
int dist[maks+5];
int n,s,t,e,kiri,kanan,w,f,mf;
void augment(int v, int minEdge) {
	if (v==s) {
		f = minEdge;
		return;
	}
	else if (p[v]!=-1) {
		augment(p[v],min(minEdge,res[p[v]][v]));
		res[p[v]][v] -=f;
		res[v][p[v]] +=f;
	}
}

int main() {
	int ctr = 1;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		for (int i=1;i<=n;i++) {
			for (int j=1;j<=n;j++) res[i][j] = 0;
		}
		scanf("%d %d %d",&s,&t,&e);
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&kiri,&kanan,&w);
			if (res[kiri][kanan]==0) {
				res[kiri][kanan] = w;
				res[kanan][kiri] = w;	
			}
			else {
				res[kiri][kanan]+=w;
				res[kanan][kiri]+=w;
			}

		}
		mf = 0;
		while (true) {
			f = 0;
			for (int i=1;i<=n;i++) dist[i] = INF;
			dist[s] = 0;
			memset(p,-1,sizeof(p));
			queue<int> que;
			que.push(s);
			while(!que.empty()) {
				int u = que.front();
				que.pop();
				if (u==t) break;
				for (int v=1;v<=n;v++) {
					if (res[u][v] >0 && dist[v]==INF) {
						dist[v] = dist[u]+1;
						que.push(v);
						p[v] = u;
					}
				}
			}
			augment(t,INF);
			if (f==0) break;
			mf+=f;
		}
		
		printf("Network %d\n",ctr);
		printf("The bandwidth is %d.\n",mf);
		printf("\n");
		ctr++;
 	}
	return 0;
}
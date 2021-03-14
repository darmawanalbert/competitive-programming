#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <queue>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;
typedef pair<int,int> ii;
const int maks = 1000;
const int INF = 1e9;
int adj[maks+5][maks+5];
int dist[maks+5][maks+5];
int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};
int r,c;
queue<pair<int,int> > q;
int main() {
	int row,currentV,num,val,startR,startC,endR,endC;
	while (scanf("%d %d",&r,&c) != EOF) {
		if (r==0 && c==0) break;
		while (!q.empty()) q.pop();
		for (int i=0;i<r;i++) {
			for (int j=0;j<c;j++) {
				adj[i][j] = 0;
				dist[i][j]=INF;
			}
		}
		scanf("%d",&row);
		for (int i=0;i<row;i++) {
			scanf("%d",&currentV);
			scanf("%d",&num);
			for (int j=0;j<num;j++) {
				scanf("%d",&val);
				adj[currentV][val] = 1;
			}
		}
		scanf("%d %d",&startR,&startC);
		dist[startR][startC] = 0;
		scanf("%d %d",&endR,&endC);
		q.push(mp(startR,startC));
		while (!q.empty()) {
			ii current = q.front();
			q.pop();
			for (int i=0;i<8;i++) {
				int rrow = current.ff + drow[i];
				int ccol = current.ss + dcol[i];
				if (rrow<0 || ccol<0 || rrow>=r || ccol>=c) continue;
				if (adj[rrow][ccol]==1) continue;
				if (dist[rrow][ccol]==INF) {
					dist[rrow][ccol] = dist[current.ff][current.ss]+1;
					q.push(mp(rrow,ccol));
				}
			}
		}
		printf("%d\n",dist[endR][endC]);
	}
	
	
	return 0;
}
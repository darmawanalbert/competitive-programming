#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <queue>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
const int maks = 30;
const int INF = 1e9;
char a[maks+5][maks+5][maks+5];
bool visited[maks+5][maks+5][maks+5];
int dist[maks+5][maks+5][maks+5];

int drow[] = {1,0,-1,0,0,0};
int dcol[] = {0,1,0,-1,0,0};
int dlvl[] = {0,0,0,0,1,-1};

int main() {
	int l,r,c;
	while (scanf("%d %d %d",&l,&r,&c)!=EOF) {
		if (l==0 && r==0 && c==0) break;
		iii s;
		iii t;
		for (int k=0;k<l;k++) {
			for (int i=0;i<r;i++) {
				scanf("%s",a[k][i]);
				for (int j=0;j<c;j++) {
					if (a[k][i][j]=='S') s = mp(k,mp(i,j));
					if (a[k][i][j]=='E') t = mp(k,mp(i,j));
				}
			}
		}
		memset(visited,false,sizeof(visited));
		visited[s.ff][s.ss.ff][s.ss.ss] = true;
		for (int k=0;k<l;k++) {
			for (int i=0;i<r;i++) {
				for (int j=0;j<c;j++) dist[k][i][j] = INF;
			}
		}
		dist[s.ff][s.ss.ff][s.ss.ss] = 0;
		queue<iii> q;
		q.push(s);
		while (!q.empty()) {
			iii cur = q.front();
			q.pop();
			for (int i=0;i<6;i++) {
				int rrow = cur.ss.ff + drow[i];
				int ccol = cur.ss.ss + dcol[i];
				int llvl = cur.ff + dlvl[i];
				if (rrow<0 || ccol<0 || llvl<0 || rrow>=r || ccol>=c || llvl>=l) continue;
				if (visited[llvl][rrow][ccol]) continue;
				visited[llvl][rrow][ccol] = true;
				if (a[llvl][rrow][ccol]!='#') {
					dist[llvl][rrow][ccol] = dist[cur.ff][cur.ss.ff][cur.ss.ss]+1;
					q.push(mp(llvl,mp(rrow,ccol)));
				}
			}
		}
		if (dist[t.ff][t.ss.ff][t.ss.ss]==INF) printf("Trapped!\n");
		else printf("Escaped in %d minute(s).\n",dist[t.ff][t.ss.ff][t.ss.ss]);
		
	}	
	return 0;
}
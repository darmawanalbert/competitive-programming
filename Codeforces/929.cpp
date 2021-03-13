#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>
#include <utility>
#include <queue>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
const int INF = 1e9;
const int maks = 1000;
int a[maks+5][maks+5];
int dist[maks+5][maks+5];
priority_queue<iii, vector<iii>, greater<iii> > pq;

int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};

int main() {
	int r,c;
	int tc;
	scanf("%d",&tc);
	while (tc--) {
		scanf("%d",&r);
		scanf("%d",&c);
		for (int i=0;i<r;i++) {
			for (int j=0;j<c;j++) scanf("%d",&a[i][j]);
		}
		for (int i=0;i<r;i++) for (int j=0;j<c;j++) dist[i][j] = INF;
		dist[0][0] = a[0][0];
		while (!pq.empty()) pq.pop();
		pq.push(mp(0,mp(0,0)));
		while (!pq.empty()) {
			iii front = pq.top();
			pq.pop();
			int d = front.ff;
			int row = front.ss.ff;
			int col = front.ss.ss;
			if (d>dist[row][col]) continue;
			for (int i=0;i<4;i++) {
				int rrow = row + drow[i];
				int ccol = col + dcol[i];
				if (rrow<0 || ccol<0 || rrow>=r || ccol>=c) continue;
				if (dist[rrow][ccol] > dist[row][col]+a[rrow][ccol]) {
					dist[rrow][ccol] = dist[row][col]+a[rrow][ccol];
					pq.push(mp(dist[rrow][ccol],mp(rrow,ccol)));
				}
			}
		}
		cout << dist[r-1][c-1] << endl;
	}
	return 0;
}
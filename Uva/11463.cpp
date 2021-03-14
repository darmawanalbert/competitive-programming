#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
const int INF = 1e9;
int a[105][105];

int main() {
	int t,e,n,u,v,s,d;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		for (int i=0;i<=100;i++) for (int j=0;j<=100;j++) a[i][j] = INF;
		scanf("%d",&n);
		scanf("%d",&e);
		for(int i=0;i<=100;i++) a[i][i] = 0;
		for (int i=0;i<e;i++) {
			scanf("%d %d",&u,&v);
			a[u][v] = 1;
			a[v][u] = 1;
		}
		// Floyd Warshall
		for (int k=0;k<n;k++) {
			for (int i=0;i<n;i++) {
				for (int j=0;j<n;j++) {
					a[i][j] = min(a[i][j],a[i][k]+a[k][j]);
				}
			}
		}
		
		scanf("%d %d",&s,&d);

		int mini = 0;
		for (int i=0;i<n;i++) {
			mini = max(mini,a[s][i]+a[i][d]);
		}
		
		printf("Case %d: %d\n",ctr,mini);
	}
	return 0;
}

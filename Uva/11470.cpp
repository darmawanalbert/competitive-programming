#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>

using namespace std;
int n;
int a[15][15];

int main() {
	int ctr = 1;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) scanf("%d",&a[i][j]);
		}
		printf("Case %d:",ctr);
		int cmin = 0;
		int cmax = n-1;
		int rmin = 0;
		int rmax = n-1;
		int range = (int) ceil((double)n/2);
		for (int i=0;i<range;i++) {
			int acc = 0;
			for (int i=rmin;i<=rmax;i++) {
				for (int j=cmin;j<=cmax;j++) {
					if (i==rmin || i==rmax) acc+=a[i][j];
					else {
						if (j==cmin || j==cmax) acc+=a[i][j];
					}
				}
			}
			printf(" %d",acc);
			cmin++;
			cmax--;
			rmin++;
			rmax--;
		}
		printf("\n");
		ctr++;
	}
	return 0;
}
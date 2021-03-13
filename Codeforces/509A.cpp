#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int a[15][15];

int main() {
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		if (i==1) {
			for (int j=1;j<=n;j++) a[i][j] = 1;
		}
		else {
			for (int j=1;j<=n;j++) {
				if (j==1) a[i][j] = 1;
				else {
					a[i][j] = a[i-1][j] + a[i][j-1];
				}
			}
		}
	}
	printf("%d\n",a[n][n]);
	return 0;
}
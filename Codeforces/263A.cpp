#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int a[10][10];

int main() {
	int r,c;
	for (int i=1;i<=5;i++) {
		for (int j=1;j<=5;j++) {
			scanf("%d",&a[i][j]);
			if (a[i][j]==1) {
				r = i;
				c = j;
			}
		}
	}
	printf("%d\n",abs(r-3)+abs(c-3));
	return 0;
}
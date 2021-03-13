#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int ans;
	if (n%2==0) ans = n*(n/2);
	else ans = ((n+1)/2)*((n+1)/2) + ((n-1)/2)*((n-1)/2);
	printf("%d\n",ans);
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			if (i%2==0) {
				if (j%2==0) printf("C");
				else printf(".");
			}
			else {
				if (j%2==0) printf(".");
				else printf("C");
			}
		}
		printf("\n");
	}
}
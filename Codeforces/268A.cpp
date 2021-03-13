#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int h[105];
int g[105];

int main() {
	int n;
	int acc = 0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d %d",&h[i],&g[i]);
	}
	for (int i=1;i<=n;i++) {
		for (int j=1;j<=n;j++) {
			if (i==j) continue;
			if (h[i]==g[j]) acc++;
		}
	}
	printf("%d\n",acc);
	
	return 0;
}
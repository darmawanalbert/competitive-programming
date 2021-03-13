#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int INF = 1e9;
int a[105];

int main() {
	int n,maks;
	maks = -INF;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		if (a[i]>maks) maks = a[i];
	}
	int acc = 0;
	for (int i=0;i<n;i++) {
		acc+=abs(a[i]-maks);
	}
	printf("%d\n",acc);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n;
	int a[2005];
	int b[2005];
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n;i++) b[i] = 1;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (i==j) continue;
			if (a[j]>a[i]) b[i]++;
		}
	}
	for (int i=0;i<n;i++) {
		if (i>0) printf(" ");
		printf("%d",b[i]);
	}
	printf("\n");
	
	return 0;
}
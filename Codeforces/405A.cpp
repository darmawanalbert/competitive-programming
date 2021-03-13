#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;
const int maks = 100;
int a[maks+5];

int main() {
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n);
	for (int i=0;i<n;i++) {
		if (i>0) printf(" ");
		printf("%d",a[i]);
	}
	printf("\n");
	return 0;
}
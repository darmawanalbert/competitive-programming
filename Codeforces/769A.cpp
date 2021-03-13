#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
const int maks = 5;
int a[maks+5];
int main() {
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n);
	int idx = n/2;
	printf("%d\n",a[idx]);
	return 0;
}
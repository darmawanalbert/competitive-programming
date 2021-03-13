#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 100;
int a[maks+5];
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n);
	int acc = 0;
	for (int i=0;i<m;i++) {
		if (a[i]>=0) break;
		acc-=a[i];
	} 
	printf("%d\n",acc);
	return 0;
}
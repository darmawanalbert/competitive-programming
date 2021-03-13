#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
int a[105];
int main() {
	int n,d,m;
	scanf("%d %d",&n,&d);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	scanf("%d",&m);
	int acc = 0;
	sort(a,a+n);
	int idx = 0;
	while (true) {
		if (n==0) break;
		if (m==0) break;
		acc+=a[idx];
		n--;
		idx++;
		m--;
	}
	while (m>0) {
		acc-=d;
		m--;
	}
	printf("%d\n",acc);
 	return 0;
}
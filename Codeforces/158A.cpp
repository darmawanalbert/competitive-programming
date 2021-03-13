#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int a[55];
	int n,k;
	scanf("%d %d",&n,&k);
	int acc = 0;
	for (int i=1;i<=n;i++) scanf("%d",&a[i]);
	for (int i=1;i<=n;i++) {
		if (a[i]>=a[k] && a[i]>0) acc++;
	}
	printf("%d\n",acc);
	return 0;
}
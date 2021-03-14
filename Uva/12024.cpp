#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;

ll fac[15];
ll subfac[15];

void precompute() {
	fac[0] = 1;
	for (ll i=1;i<=12;i++) fac[i] = fac[i-1]*i;
	subfac[0] = 1;
	subfac[1] = 0;
	for (ll i=2;i<=12;i++) subfac[i] = (i-1)*(subfac[i-1]+subfac[i-2]);
}

int main() {
	precompute();
	int t,n;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		printf("%lld/%lld\n",subfac[n],fac[n]);
	}
}
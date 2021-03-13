#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;
typedef long long ll;

ll a[35];

void precompute() {
	a[1] = 2;
	a[2] = 4;
	a[3] = 7;
	for (ll i=4;i<=30;i++) a[i] = a[i-1] + a[i-2] + a[i-3];
}

ll fpow(ll x,ll y) {
	if (y==0) return 1;
	if (y==1) return x;
	ll half = fpow(x,y/2);
	if (y%2==0) return half*half;
	else return half*half*x;
}

int main() {
	precompute();
	ll n;
	while (scanf("%lld",&n)!=EOF) {
		if (n==0) break;
		printf("%lld\n",fpow(2,n)-a[n]);
	}
	return 0;
}
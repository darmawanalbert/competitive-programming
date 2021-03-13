#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long long ll;
ll sum[15],hi[15],prefixsum[15];
void precompute() {
	ll mul = 9;
	ll bounded = 10;
	for (ll i=1;i<=10;i++) {
		sum[i] = mul * i;
		hi[i] = bounded-1;
		mul*=10;
		bounded*=10;
	}
	prefixsum[1] = 9;
	for (ll i=2;i<=10;i++) {
		prefixsum[i] = prefixsum[i-1]+sum[i];
	}
}

ll numDigit(ll n) {
	ll ans = 0;
	while  (n>0) {
		n/=10;
		ans++;
	}
	return ans;
}

int main() {
	precompute();
	ll n;
	scanf("%lld",&n);
	ll dig = numDigit(n);
	ll res = prefixsum[dig]-((hi[dig]-n)*dig);
	printf("%lld\n",res);
	return 0;
}
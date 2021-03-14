#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
	ll n,m;
	while (scanf("%lld %lld",&n,&m)!=EOF) {
		ll ans = 1ll;
		m = n-m;
		for (ll i=m+1;i<=n;i++) {
			ans*=i;
			while (ans%10ll==0) ans/=10ll;
			ans%=10000000000ll;
		}
		printf("%lld\n",ans%10ll);
	}
	return 0;
}
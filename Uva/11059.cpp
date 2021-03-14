#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;
const ll maks = 18;
ll a[maks+5];
int main() {
	ll n;
	int ctr = 1;
	while (scanf("%lld",&n)!=EOF) {
		for (ll i=1;i<=n;i++) scanf("%lld",&a[i]);
		ll val = 0;
		for (ll i=1;i<=n;i++) {
			for (ll j=1;j<=n+1-i;j++) {
				ll temp = 1;
				for (ll u=j;u<=j+i-1;u++) temp*=a[u];
				val = max(val,temp);
			}
		}
		printf("Case #%d: The maximum product is %lld.\n\n",ctr++,val);
	}
	return 0;
}
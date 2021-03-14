#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;
const ll maks = 2000000;
ll phi[maks+5];
ll depth[maks+5];

void sieve() {
	memset(depth,0,sizeof(depth));
	for (ll i=1;i<=maks;i++) phi[i] = i;
	for (ll i=2;i<=maks;i+=2) {
		phi[i]/=2;
	}
	for (ll i=3;i<=maks;i+=2) {
		if (phi[i]==i) {
			for (ll j=i;j<=maks;j+=i) {
				phi[j]/=i;
				phi[j]*=(i-1);
			}
		}
	}
	for (ll i=2;i<=maks;i++) {
		ll temp = i;
		while (temp!=1) {
			depth[i]++;
			temp = phi[temp];
		}
	}
	
}

int main() {
	sieve();
	ll t,a,b;
	scanf("%lld",&t);
	while (t--) {
		ll sum = 0;
		scanf("%lld %lld",&a,&b);
		for (ll i=a;i<=b;i++) sum+=depth[i];
		printf("%lld\n",sum);
	}
	return 0;
}
#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;
const ll maks = 100000;
ll d[maks+5];
ll sigma[maks+5];

ll fpow(ll x, ll y) {
	if (y==0) return 1;
	if (y==1) return x;
	ll half = fpow(x,y/2);
	if (y%2==0) return half*half;
	else return half*half*x;
}

void sieve() {
	ll power,tmp;
	for (ll i=0;i<=maks;i++) d[i] = sigma[i] = 1;
	for (ll i=2;i<=maks;i++) {
		if (d[i]==1) {
			for (ll j=i;j<=maks;j+=i) {
				power = 0;
				tmp = j;
				while (tmp%i==0) {
					tmp/=i;
					power++;
				}
				d[j]*=(power+1);
				sigma[j]*=((fpow(i,power+1)-1)/(i-1));
			}
		}
	}
}


int main() {
	sieve();
	ll t,a,b,k,totd,totsigma;
	scanf("%lld",&t);
	while (t--) {
		totd = 0;
		totsigma = 0;
		scanf("%lld %lld %lld",&a,&b,&k);
		for (ll i=a;i<=b;i++) {
			if (i%k==0) {
				totd+=d[i];
				totsigma+=sigma[i];
			}
		}
		printf("%lld %lld\n",totd,totsigma);
	}
	return 0;
}
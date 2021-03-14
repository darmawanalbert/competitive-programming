#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>

using namespace std;
typedef long long ll;

const ll maks = 1050000;
ll numpf[maks+5];
ll a[maks+5];

void sieve() {
	ll temp;
	for (ll i=0;i<=maks;i++) numpf[i] = 0;
	for (ll i=2;i<=maks;i++) {
		if (numpf[i]==0) {
			for (ll j=i;j<=maks;j+=i) {
				temp = j;
				while (temp%i==0) {
					temp/=i;
					numpf[j]++;
				}
			}
		}
	}
}

int main() {
	sieve();
	ll n,sum;
	while (scanf("%lld",&n)!=EOF) {
		sum = 0;
		for (ll i=0;i<n;i++) scanf("%lld",&a[i]);
		for (ll i=0;i<n;i++) {
			if (numpf[a[i]]==2) sum++; 
		}
		printf("%lld\n",sum);
	}
	return 0;
}


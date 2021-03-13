#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <set>
#define pb push_back
using namespace std;
typedef long long ll;
const ll maks = 1000000;
set<long long> primes;
bool isprime[maks+5];

void sieve() {
	memset(isprime,true,sizeof(isprime));
	isprime[0] = isprime[1] = false;
	for (int i=4;i<=maks;i+=2) isprime[i] = false;
	for (int i=3;i*i<=maks;i+=2) {
		if (isprime[i]) {
			for (int j=i*i;j<=maks;j+=i) isprime[j] = false;
		}
	}
	primes.clear();
	primes.insert(4);
	for (int i=3;i<=maks;i+=2) if (isprime[i]) primes.insert((long long)i*i);
}

int main() {
	sieve();
	ll n;
	ll a[maks];
	ll temp;
	scanf("%lld",&n);
	for (int i=0;i<n;i++) scanf("%lld",&a[i]);
	for (int i=0;i<n;i++) {
		temp = a[i];
		if (primes.find(temp)!=primes.end()) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
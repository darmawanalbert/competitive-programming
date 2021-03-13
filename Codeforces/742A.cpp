#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;

ll modexp(ll x,ll y, ll mod) {
	x = x%mod;
	ll res = 1;
	while (y>0) {
		if (y%2==1) res = (res*x)%mod;
		y/=2;
		x = (x*x)%mod;
	}
	return res%mod;
}

int main() {
	ll n;
	scanf("%lld",&n);
	cout << modexp(1378,n,10) << endl;
	return 0;
}
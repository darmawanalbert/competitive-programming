#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
typedef long long ll;

ll f(ll x) {
	return x*(x-1)/2;
}

int main() {
	ll n,m;
	scanf("%lld %lld",&n,&m);
	if (m==1) {
		ll res = f(n);
		printf("%lld %lld\n",res,res);
	}
	else {
		ll minimum,maximum;
		maximum = f(n-(m-1));
		if (n%m==0) {
			minimum = f(n/m)*m;
		}
		else {
			minimum = (n%m)*f((n/m)+1);
			minimum+=(m-(n%m))*f(n/m);
		}
		printf("%lld %lld\n",minimum,maximum);
	}
	
	return 0;
}
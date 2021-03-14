#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;

ll absolute(ll a) {
	return (a>0)?a:(-a);
}

ll mulmod(ll a,ll b, ll c) {
	ll x = 0;
	ll y = a%c;
	while (b>0) {
		if (b%2==1) x = (x+y)%c;
		y = (y*2)%c;
		b/=2;
	}
	return x%c;
}

ll gcd(ll a,ll b) {return (b==0)?a:gcd(b,a%b);}
ll pollard_rho(ll n) {
	ll i = 0;
	ll k = 2;
	ll x = 3;
	ll y = 3;
	while (true) {
		i++;
		x = (mulmod(x,x,n)+n-1)%n;
		ll d = gcd(absolute(y-x),n);
		if (d!=1 && d!=n) return d;
		if (i==k) {
			y = x;
			k*=2;
		}
	}
}

int main() {
	int t;
	ll in;
	scanf("%d",&t);
	while (t--) {
		scanf("%lld",&in);
		ll res = pollard_rho(in);
		if (res > in/res) res = in/res;
		cout << res << " " <<  in/res << endl;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
typedef long long ll;
int main() {
	ll t;
	ll n;
	scanf("%lld",&t);
	while (t--) {
		scanf("%lld",&n);
		bool found = false;
		ll sqr = sqrt(n);
		for (ll a=0;a<=sqr;a++) {
			if (found) break;
			for (ll b=0;b<=sqr;b++) {
				if (found) break;
				for (ll c=0;c<=sqr;c++) {
					if (found) break;
					ll sum  = a*a+b*b+c*c;
					if (sum==n) {
						cout << a << " " << b << " " << c << endl;
						found = true;
						break;
					}
				}
			}
		}
		if (!found) cout << "-1" << endl;
		
	}
	return 0;
}
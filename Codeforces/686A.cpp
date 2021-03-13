#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;
int main() {
	ll n,x,d;
	string line;
	scanf("%lld %lld",&n,&x);
	ll acc = 0;
	for (ll i=0;i<n;i++) {
		cin >> line >> d;
		if (line=="+") {
			x+=d;
		}
		else if (line=="-") {
			if (x>=d) {
				x-=d;
			}
			else {
				acc++;
			}
		}
	}
	printf("%lld %lld\n",x,acc);
	return 0;
}
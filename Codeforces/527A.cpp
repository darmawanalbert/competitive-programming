#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;
int main() {
	ll a,b;
	ll temp;
	scanf("%lld %lld",&a,&b);
	ll acc = 0;
	while (true) {
		if (a==b || a==0 || b==0) {
			break;
		}
		else if (a>b) {
			temp = (long long) a/b;
			acc+=temp;
			a-=(temp*b);
		}
		else if (a<b) {
			temp = (long long) b/a;
			acc+=temp;
			b-=(temp*a);
		}
	}
	printf("%lld\n",acc);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
typedef long long ll;
int main() {
	ll n;
	scanf("%lld",&n);
	ll sum = 0;
	for (ll k=n,i=1;k>=1;k--,i++) {
		sum+=((k-1)*i);
		sum++;
	}
	printf("%lld\n",sum);
	return 0;
}
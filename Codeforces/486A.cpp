#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;
int main() {
	ll n;
	scanf("%lld",&n);
	if (n%2==0) printf("%lld\n",n/2);
	else printf("-%lld\n",(n+1)/2);
	return 0;
}
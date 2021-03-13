#include <iostream>
#include <cstdio>

using namespace std;
typedef long long ll;
int main() {
	ll n,m,a;
	scanf("%lld %lld %lld",&n,&m,&a);
	ll sum = 0;
	if (n%a==0) sum+=(n/a);
	else sum+=(n/a)+1;
	if (m%a==0) sum*=(m/a);
	else sum*=(m/a)+1;
	printf("%lld\n",sum);
	return 0;
}
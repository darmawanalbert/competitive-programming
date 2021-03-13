#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;

ll odd(ll n) {return ((n<<1)-1);}
ll even(ll n) {return (n<<1);}

int main() {
	ll k,n;
	scanf("%lld %lld",&n,&k);
	if (n%2==0) {
		if (k>=1 && k<=(n/2)) cout << odd(k) << endl;
		else cout << even(k-(n/2));
	}
	else {
		if (k>=1 && k<=((n+1)/2)) cout << odd(k) << endl;
		else cout << even(k-((n+1)/2));
	}
	return 0;
}
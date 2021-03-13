#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
typedef long long ll;

ll gcd(ll a,ll b) {return (b==0)?a:(gcd(b,a%b));}
ll lcm(ll a,ll b) {return a*(b/gcd(a,b));}

int main() {
	ll n,k,c;
	scanf("%lld %lld",&n,&k);
	ll cur = 1;
	for (int i=0;i<n;i++) {
		scanf("%lld",&c);
		cur = gcd(k,lcm(cur,c));
	}
	if (cur==k) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}
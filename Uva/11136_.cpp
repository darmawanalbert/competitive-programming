#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
using namespace std;
typedef long long ll;
multiset<ll> mset;
multiset<ll>::iterator lo,hi; 
int main() {
	ll n,num,temp;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		ll acc = 0;
		mset.clear();
		for (ll i=0;i<n;i++) {
			scanf("%lld",&num);
			for (ll j=0;j<num;j++) {
				scanf("%lld",&temp);
				mset.insert(temp);
			}
			lo = mset.begin();
			hi = mset.end();
			--hi;
			acc+=((*hi)-(*lo));
			mset.erase(lo);
			mset.erase(hi);
		}
		printf("%lld\n",acc);
	}
	return 0;
}

#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
typedef long long ll;
int main() {
	string a;
	ll t;
	scanf("%lld",&t);
	while (t--) {
		cin >> a;
		sort(a.begin(),a.end());
		do {
			for (ll i=0;i<a.size();i++) printf("%c",a[i]);
			printf("\n");
		} while (next_permutation(a.begin(),a.end()));
	}
	return 0;
}
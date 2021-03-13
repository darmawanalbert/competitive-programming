#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;
typedef long long ll;
const ll maks = 300000;
ll a[maks+5];
int main() {
	ll n;
	ll acc = 0;
	cin >> n;
	for (int i=0;i<n;i++) {
		cin >> a[i];
		acc+=a[i];
	}
	sort(a,a+n);
	ll ans = acc; 
	for (int i=0;i<n-1;i++) {
		ans+=acc;
		acc-=a[i];
	}
	cout << ans << endl;
	return 0;
}
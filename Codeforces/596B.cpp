#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;
typedef long long ll;
const ll maks = 200000;
ll a[maks+5];
int main() {
	ll n;
	cin >> n;
	for (ll i=0;i<n;i++) {
		cin >> a[i];
	}
	ll acc = abs(a[0]);
	for (ll i=1;i<n;i++) {
		 acc+=(abs(a[i]-a[i-1]));
	}
	cout << acc << endl;
}
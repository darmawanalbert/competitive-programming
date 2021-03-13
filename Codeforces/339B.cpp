#pragma GCC optimize ("O3")
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
typedef long long ll;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,m,temp;
	cin >> n >> m;
	ll acc = 0;
	ll pos = 1;
	for (int i=0;i<m;i++) {
		cin >> temp;
		if (temp>=pos) {
			acc = acc + (temp-pos);
			pos = temp;
		} 
		else {
			acc = acc + (n-abs(temp-pos));
			pos = temp;
		}
	}
	cout << acc << endl;
	return 0;
}
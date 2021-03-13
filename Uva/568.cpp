#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#define ull unsigned long long
using namespace std;

ull f[6] = {1,1,2,6,24,120};

ull count (ull a) {
	if (a>=10000) return 5;
	if (a>=1000) return 4;
	if (a>=100) return 3;
	if (a>=10) return 2;
	return 1;
}
int main(void) {
	ull in,n,r;
	while (cin >> in) {
		n = in;
		r = in;
		while (n>=5) {
			n /=5;
			r %=5;
		}
		n = f[n] * f[r] * pow(2,n);
		for (int i=5;i>=count(in);i--) cout << " ";
		cout << in << " -> " << n << endl; 
	}
}
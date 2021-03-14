#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#define ll long long
using namespace std;

int main(void) {
	int t;
	ll a,b,c;
	cin >> t;
	for (int i=1;i<=t;i++) {
		cin >> a >> b >> c;
		cout << "Case " << i << ": ";
		
		if (((a+b)>c) && ((a+c)>b) && ((b+c)>a)) {
			if (a<=0||b<=0||c<=0) cout << "Invalid" << endl;
			else if (a==b && b==c && c==a) cout << "Equilateral" << endl;
			else if((a==c)||(a==b)||(b==c)) cout << "Isosceles" << endl;
			else cout << "Scalene" << endl;
		}
		else cout << "Invalid" << endl;
	}
}
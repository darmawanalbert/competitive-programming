#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>

using namespace std;
int main(void) {
	string a;
	int j;
	while(cin >> a) {
		cout << a[0];
		for (int i=1;i<a.length();i++) {
			if (a[i]!=a[i-1]) {
				cout << a[i];
			}
		}
		cout << endl;
	}
}
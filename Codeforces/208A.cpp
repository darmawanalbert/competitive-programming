#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string a;
	cin >> a;
	bool toggle = false;
	int ctr = 0;
	for (int i=0;i<a.size();i++) {
		if (i+2<=a.size()-1) {
			if (a[i]=='W' && a[i+1]=='U' && a[i+2]=='B') {
				i+=2;
				toggle = false;
			}
			else {
				if (!toggle && ctr>0) cout << " ";
				cout << a[i];
				toggle = true;
				ctr++;
			}
		}
		else {
			if (!toggle && ctr>0) cout << " ";
			cout << a[i];
			toggle = true;
			ctr++;
		}
	}
	return 0;
}
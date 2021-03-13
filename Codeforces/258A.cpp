#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	string a;
	cin >> a;
	int one = 0;
	int zero = 0;
	for (int i=0;i<a.size();i++) {
		if (a[i]=='1') one++;
		else if (a[i]=='0') zero++;
	}
	if (zero==0) {
		for (int i=0;i<a.size()-1;i++) cout << "1";
		cout << endl;
	}
	else if (one==0) {
		for (int i=0;i<a.size()-1;i++) cout << "0";
		cout << endl;
	}
	else {
		bool toggle = true;
		for (int i=0;i<a.size();i++) {
			if (a[i]=='0' && toggle) {
				toggle = false;
			}
			else cout << a[i];
		}
		cout << endl;
	}
	return 0;
}
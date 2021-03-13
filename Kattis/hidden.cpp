#include <iostream>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;
int main(void) {
	bool isValid;
	string a,b;
	int ctr;
	while (cin >> a >> b) {
		isValid = true;
		ctr = 0;
		for (int i=0;i<b.length();i++) {
			if (b[i]==a[ctr]) {
				ctr++;
			}
			else {
				for (int j=ctr+1;j<b.length();j++) {
					if (b[i]==a[j]) {
						isValid = false;
						break;
					}
				}
			}
			if (isValid==false) {
				break;
			}
		}
		if (ctr!=a.length()) {
			isValid = false;
		}
		if (isValid==true) {
			cout << "PASS" << endl;
		}
		else {
			cout << "FAIL" << endl;
		}
	}
}
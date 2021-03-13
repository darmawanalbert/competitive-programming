#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
int main(void) {
	string a;
	string b;
	while(getline(cin,a)) {
		getline(cin,b);
		if (a.length()<b.length()) {
			cout << "no" << endl;
		}
		else {
			cout << "go" << endl;
		}
	}
}
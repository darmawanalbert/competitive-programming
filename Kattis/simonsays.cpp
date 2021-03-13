#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;
int main(void) {
		int n;
		string a;
		scanf("%d",&n);
		getline(cin,a);
		for (int i=1;i<=n;i++) {
			getline(cin,a);
			if (a.substr(0,10)=="Simon says") {
				cout << a.substr(10,a.length()-1) << endl;
			}
		}
}
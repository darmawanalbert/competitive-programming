#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string a,b;
	while (cin >> a) {
		if (a=="0") break;
		b = a;
		int depth = 0;
		 do {
			int sum = 0;
			for (int i=0;i<a.size();i++) {
				int temp = a[i]-48;
				sum+=temp;
			}
			a = to_string(sum);
			depth++;
		} while (a.size()!=1);
		int fin = a[0]-48;
		cout << b;
		if (fin%9==0) {
			printf(" is a multiple of 9 and has 9-degree %d.\n",depth);
		}
		else printf(" is not a multiple of 9.\n");
	}
	return 0;
}
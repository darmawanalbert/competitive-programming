#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int t;
	string line;
	scanf("%d",&t);
	while (t--) {
		cin >> line;
		if (line.length()>10) {
			cout << line[0] << line.length()-2 << line[line.length()-1] << endl;
		}
		else cout << line << endl;
	}
	return 0;
}
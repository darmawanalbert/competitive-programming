#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
using namespace std;
int main() {
	int n;
	string init1,init2;
	string line1,line2;
	cin >> init1 >> init2;
	cout << init1 << " " << init2 << endl;
	scanf("%d",&n);
	while (n--) {
		cin >> line1 >> line2;
		if (line1==init1) {
			init1 = line2;
		}
		else {
			init2 = line2;
		}
		cout << init1 << " " << init2 << endl;
	}
	return 0;
}
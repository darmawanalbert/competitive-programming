#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int t;
	string line;
	int val;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		cin >> line;
		int len = line.size();
		for (int i=1;i<=len;i++) {
			bool toggle = true;
			string temp = line.substr(0,i);
			for (int j=i;j<len;j+=i) {
				string temp2 = line.substr(j,i);
				if (temp!=temp2) {
					toggle= false;
					break;
				}
			}
			if (toggle) {
				if (ctr>1) cout << endl;
				cout << i << endl;
				break;
			}
		}
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string line;
	cin >> line;
	int len = line.size();
	int last = line[len-1] - 48;
	bool isExist = false;
	for (int i=0;i<len;i++) {
		int tmp = line[i]-48;
		if (tmp%2==0 && tmp<last) {
			isExist = true;
			swap(line[i],line[len-1]);
			break;
		}
	}
	if (!isExist) {
		for (int i=len-1;i>=0;i--) {
			int tmp = line[i]-48;
			if (tmp%2==0) {
				isExist = true;
				swap(line[i],line[len-1]);
				break;
			}
		}
	}
	if (isExist) cout << line << endl;
	else cout << -1 << endl;
	return 0;
}

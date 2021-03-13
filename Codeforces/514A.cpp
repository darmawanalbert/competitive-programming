#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string line;
	cin >> line;
	for (int i=0;i<line.size();i++) {
		int temp = line[i]-48;
		if (i==0) {
			if (9-temp<temp && 9-temp!=0) line[i] = (char) (9-temp)+48;
		}
		else {
			if (9-temp<temp) line[i] = (char) (9-temp)+48;
		}
	}
	cout << line << endl;
	return 0;
}
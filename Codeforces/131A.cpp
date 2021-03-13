#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	string line;
	cin >> line;
	bool isTriggered = true;
	for (int i=1;i<line.size();i++) {
		if (line[i]>=97 && line[i]<=122) isTriggered = false;
	}
	if (isTriggered) {
		for (int i=0;i<line.size();i++) {
			if (line[i]>=65 && line[i]<=90) line[i]+=32;
			else if (line[i]>=97 && line[i]<=122) line[i]-=32;
		}
	}
	cout << line << endl;
	return 0;
}
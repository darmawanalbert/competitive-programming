#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	string line;
	cin >> line;
	int accLow = 0;
	int accHigh = 0;
	for (int i=0;i<line.size();i++) {
		if (line[i]>=65 && line[i]<=90) accHigh++;
		else accLow++;
	}
	if (accLow>=accHigh) {
		for (int i=0;i<line.size();i++) if (line[i]>=65 && line[i]<=90) line[i]+=32;
	}
	else {
		for (int i=0;i<line.size();i++) if (line[i]>=97 && line[i]<=122) line[i]-=32;
	}
	cout << line << endl;
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	string line;
	cin >> line;
	if (line[0]>=97 && line[0]<=122) line[0]-=32;
	cout << line << endl;
	
	return 0;
}
#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

set<char> sset;

int main() {
	sset.clear();
	string line;
	getline(cin,line);
	for (int i=0;i<line.size();i++) {
		if (line[i]>=97 && line[i]<=122) {
			sset.insert(line[i]);
		}
	}
	cout << sset.size() << endl;
	return 0;
}
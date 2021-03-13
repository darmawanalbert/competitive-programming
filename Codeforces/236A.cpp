#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <set>
using namespace std;

set<char> sset;

int main() {
	sset.clear();
	string line;
	cin >> line;
	for (int i=0;i<line.size();i++) {
		sset.insert(line[i]);
	}
	if (sset.size()%2==0) cout << "CHAT WITH HER!" << endl;
	else cout << "IGNORE HIM!" << endl;
	return 0;
}
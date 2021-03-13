#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;

int main() {
	string line;
	cin >> line;
	bool isYes = false;
	for (int i=0;i<line.size();i++) {
		if (line[i]=='H' || line[i]=='Q' || line[i]=='9') isYes = true;
	}
	if (isYes) printf("YES\n");
	else printf("NO\n");
	return 0;
}
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
	int acc = 1;
	bool danger = false;
	char cur = line[0];
	for (int i=1;i<line.size();i++) {
		if (line[i]==cur) acc++;
		else {
			acc = 1;
			cur = line[i];
		}
		if (acc>=7) {
			danger = true;
			break;
		}
	}
	if (danger) printf("YES\n");
	else printf("NO\n");
	return 0;
}
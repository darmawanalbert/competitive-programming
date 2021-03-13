#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	string line,line2;
	cin >> line;
	cin >> line2;
	bool isYes = true;
	if (line.size()!=line2.size()) isYes = false;
	else {
		for (int i=0,j=line.size()-1;i<line.size();i++,j--) {
			if (line[i]!=line2[j]) {
				isYes = false;
				break;
			}
		}
	}
	if (isYes) printf("YES\n");
	else printf("NO\n");
	return 0;
}
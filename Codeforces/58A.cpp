#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const string word = "hello";
int main() {
	string a;
	cin >> a;
	bool isYes = false;
	int idx = 0;
	for (int i=0;i<a.size();i++) {
		if (a[i]==word[idx]) {
			idx++;
			if (idx>=5) {
				isYes = true;
				break;
			}
		}
	}
	if (isYes) printf("YES\n");
	else printf("NO\n");
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

bool comp(char a,char b) {
	bool aLower = true;
	bool bLower = true;
	if (a>=65 && a<=90) aLower = false;
	if (b>=65 && b<=90) bLower = false;
	if (aLower) {
		if (bLower) return a<b;
		else {
			a-=32;
			return a<b;
		}
	}
	else {
		if (bLower) {
			b-=32;
			return a<=b;
		}
		else return a<b;
	}
}

int main() {
	int t;
	string line;
	scanf("%d",&t);
	while (t--) {
		cin >> line;
		sort(line.begin(),line.end(),comp);
		do {
			cout << line << endl;
		} while (next_permutation(line.begin(),line.end(),comp));
	}
	return 0;
}
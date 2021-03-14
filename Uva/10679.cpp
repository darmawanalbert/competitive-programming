#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
const int maks = 1000;
string text,pattern;
int prefix[maks+5];

void precompute() {
	int i = 0;
	int j = -1;
	prefix[0] = -1;
	while (i<pattern.size()) {
		while (j>=0 && pattern[i]!=pattern[j]) j = prefix[j];
		i++;
		j++;
		prefix[i] = j;
	}
}

bool kmp() {
	int i = 0;
	int j = 0;
	while (i<text.size()) {
		while (j>=0 && text[i]!=pattern[j]) j = prefix[j];
		i++;
		j++;
		if (j==pattern.size()) {
			return true;
		}
	}
	return false;
}

int main() {
	int t;
	int q;
	scanf("%d",&t);
	while (t--) {
		cin >> text;
		scanf("%d",&q);
		while (q--) {
			cin >> pattern;
			precompute();
			if (kmp()) cout << "y" << endl;
			else cout << "n" << endl;
		}
	}
	return 0;
}
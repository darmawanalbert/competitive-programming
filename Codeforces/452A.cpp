#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

string eevee[] = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};

int main() {
	int n;
	string line;
	scanf("%d",&n);
	cin >> line;
	int idx;
	for (int i=0;i<8;i++) {
		string comp = eevee[i];
		if (line.size()!=comp.size()) continue;
		bool isTrue = true;
		for (int j=0;j<line.size();j++) {
			if (line[j]>=97 && line[j]<=122) {
				if (line[j]!=comp[j]) {
					isTrue = false;
					break;
				}
			}
		}
		if (isTrue) {
			idx = i;
			break;
		}
	}
	cout << eevee[idx] << endl;
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n;
	string line;
	scanf("%d",&n);
	cin >> line;
	for (int i=0;i<line.size();i++) {
		if (line[i]=='o') {
			if (i+2 < line.size()) {
				if (line[i+1]=='g' && line[i+2]=='o') {
					cout << "***";
					i+=2;
					while (i+2<line.size() && line[i+1]=='g' && line[i+2]=='o') {
						i+=2;
					}
				}
				else cout << line[i];
			}
			else cout << line[i];
		}
		else cout << line[i];
	}
	return 0;
}
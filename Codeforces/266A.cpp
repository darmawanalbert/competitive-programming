#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	string line;
	cin >> line;
	int acc = 0;
	for (int i=0;i<n-1;i++) {
		int idx = i+1;
		while (line[i]==line[idx] && idx<n) {
			acc++;
			idx++;
		}
		i = idx-1;
	}
	cout << acc << endl;
	return 0;
}
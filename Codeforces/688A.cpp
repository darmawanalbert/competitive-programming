#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

char a[105][105];

int main() {
	int n,d;
	string line;
	scanf("%d %d",&n,&d);
	for (int i=0;i<d;i++) {
		cin >> line;
		for (int j=0;j<line.size();j++) a[i][j] = line[j];
	}
	int acc = 0;
	int maks = 0;
	for (int i=0;i<d;i++) {
		bool isBeating = false;
		for (int j=0;j<n;j++) if(a[i][j]=='0') isBeating = true;
		if (isBeating) {
			acc++;
			maks = max(maks,acc);
		}
		else acc = 0;
	}
	printf("%d\n",maks);
	return 0;
}
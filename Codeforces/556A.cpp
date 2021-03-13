#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
int main() {
	int n;
	scanf("%d",&n);
	string line;
	cin >> line;
	int sumOne = 0;
	int sumZero = 0;
	for (int i=0;i<line.size();i++) {
		if (line[i]=='1') sumOne++;
		if (line[i]=='0') sumZero++;
	}
	printf("%d\n",abs(sumOne-sumZero));
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n;
	string line;
	scanf("%d",&n);
	cin >> line;
	int i = 0;
	int ans = 0;
	while (line[i]=='<') {
		ans++;
		i++;
	}
	i = n-1;
	while (line[i]=='>') {
		ans++;
		i--;
	}
	printf("%d\n",ans);
	return 0;
}
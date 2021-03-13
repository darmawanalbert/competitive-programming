#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <set>
using namespace std;
set<char> sset;
int main() {
	int n;
	sset.clear();
	string line;
	scanf("%d",&n);
	cin >> line;
	for (int i=0;i<line.size();i++) {
		if (line[i]>=65 && line[i]<=90) line[i]+=32;
		sset.insert(line[i]);
	}
	if (sset.size()==26) printf("YES\n");
	else printf("NO\n");
	return 0;
}
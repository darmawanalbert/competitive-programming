#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
const int INF = 1e9;
int main() {
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	string line;
	cin >> line;
	a--;
	b--;
	int minimum = INF;
	if (line[a]==line[b] || a==b) printf("0\n");
	else printf("1\n");
	return 0;
}
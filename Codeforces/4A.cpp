#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	if (n%2==0 && n!=2) printf("YES\n");
	else printf("NO\n");
	return 0;
}
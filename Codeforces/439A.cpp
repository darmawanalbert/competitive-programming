#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 100;
int song[maks+5];
int main() {
	int n,d;
	int acc = 0;
	scanf("%d %d",&n,&d);
	for (int i=1;i<=n;i++) {
		scanf("%d",&song[i]);
		acc+=song[i];
	}
	bool toggle = true;
	if (acc+(10*(n-1))<=d) {
		int jokes = 2*(n-1);
		d-=(acc+(10*(n-1)));
		jokes+=(d/5);
		printf("%d\n",jokes);
	}
	else printf("-1\n");
	return 0;
}
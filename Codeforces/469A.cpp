#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;
set<int> sset;

int main() {
	int n;
	int p,q,temp;
	scanf("%d",&n);
	sset.clear();
	scanf("%d",&p);
	while (p--) {
		scanf("%d",&temp);
		sset.insert(temp);
	}
	scanf("%d",&q);
	while (q--) {
		scanf("%d",&temp);
		sset.insert(temp);
	}
	bool isComplete = true;
	for (int i=1;i<=n;i++) {
		if (sset.find(i)==sset.end()) {
			isComplete = false;
			break;
		}
	}
	if (isComplete) printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");
	return 0;
}
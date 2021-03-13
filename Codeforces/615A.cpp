#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
set<int> sset;
int main() {
	int n,m,num,x;
	sset.clear();
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++) {
		scanf("%d",&num);
		while (num--) {
			scanf("%d",&x);
			sset.insert(x);
		}
	}
	bool toggle = true;
	for (int i=1;i<=m;i++) if (sset.find(i)==sset.end()) toggle = false;
	if (toggle) printf("YES\n");
	else printf("NO\n");
	return 0;
}
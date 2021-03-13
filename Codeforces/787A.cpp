#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#define pb push_back
using namespace std;
const int maks = 1000000;
set<int> aa;
set<int> bb;
int main() {
	int a,b,c,d;
	scanf("%d %d",&a,&b);
	scanf("%d %d",&c,&d);
	aa.clear();
	bb.clear();
	bool found = false;
	for (int i=b;i<=maks;i+=a) aa.insert(i);
	for (int i=d;i<=maks;i+=c) {
		if (aa.find(i)!=aa.end()) {
			printf("%d\n",i);
			found = true;
			break;
		}
		bb.insert(i);
	}
	if (!found) {
		for (int i=b;i<=maks;i+=a) {
			if (bb.find(i)!=bb.end()) {
				printf("%d\n",i);
				found = true;
				break;
			}
		}
	}
	if (!found) {
		printf("-1\n");
	}
	return 0;
}
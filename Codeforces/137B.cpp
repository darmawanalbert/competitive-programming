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
const int maks = 5000;
set<int> sset;
int a[maks+5];
int main() {
	int n;
	sset.clear();
	int acc = 0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++) {
		if (a[i]>=1 && a[i]<=n && sset.find(a[i])==sset.end()) {
			sset.insert(a[i]);
		}
		else {
			acc++;
		}
	}
	printf("%d\n",acc);
	return 0;
}
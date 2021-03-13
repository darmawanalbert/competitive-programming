#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
#include <vector>
#define pb push_back
using namespace std;
const int maks = 100000;
int a[maks+5];
vector<int> used;
set<int> sset;
set<int> exist;
int main() {
	int n;
	sset.clear();
	used.clear();
	exist.clear();
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		sset.insert(a[i]);
	}
	for (int i=1;i<=n;i++) {
		if (sset.find(i)==sset.end()) {
			used.pb(i);
		}
	}
	int idx = 0;
	for (int i=0;i<n;i++) {
		if (i>0) printf(" ");
		if((a[i]>=1 && a[i]<=n) && exist.find(a[i])==exist.end()) {
			printf("%d",a[i]);
			exist.insert(a[i]);
		}
		else {
			printf("%d",used[idx]);
			idx++;
		}
	}
	printf("\n");
	
	
	return 0;
}
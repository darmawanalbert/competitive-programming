#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#define pb push_back
using namespace std;
const int maks = 100;
int a[maks+5][maks+5];
set<int> sset;
int main() {
	int n;
	sset.clear();
	scanf("%d",&n);
	for (int i=1;i<=n;i++) for (int j=1;j<=n;j++) scanf("%d",&a[i][j]);
	for (int i=1;i<=n;i++) {
		bool toggle = true;
		for (int j=1;j<=n;j++) {
			if (i==j) continue;
			if (a[i][j]==1 || a[i][j]==3) {
				toggle =false;
				break;
			}
		}
		if (toggle) sset.insert(i);
	}
	cout << sset.size() << endl;
	int ctr = 0;
	for (set<int>::iterator it = sset.begin();it!=sset.end();++it) {
		if (ctr>0) printf(" ");
		ctr++;
		cout << *it;
	}
	if (sset.size() >0) printf("\n");
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int a[105][105];
set<int> sset;
int main() {
	int n,m,val;
	string line;
	sset.clear();
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++) {
		cin >> line;
		for (int j=0;j<m;j++) a[i][j] = line[j]-48;
	}
	for (int i=0;i<m;i++) {
		val = a[0][i];
		for (int j=1;j<n;j++) {
			if (a[j][i]>val) val = a[j][i];
		}
		for (int j=0;j<n;j++) {
			if (a[j][i]==val) {
				sset.insert(j);
			}
		}
	}
	cout << sset.size() << endl;
	return 0;
}
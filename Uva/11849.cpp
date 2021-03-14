#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>

using namespace std;

set<int> cd;

int main() {
	int n,m,temp;
	while (scanf("%d %d",&n,&m) !=EOF) {
		if (n==0 && m==0) break;
		cd.clear();
		int ctr = 0;
		for (int i=0;i<n;i++) {
			scanf("%d",&temp);
			cd.insert(temp);
		}
		for (int i=0;i<m;i++) {
			scanf("%d",&temp);
			if (cd.find(temp)!=cd.end()) ctr++;
		}
		printf("%d\n",ctr);
	}
	return 0;
}
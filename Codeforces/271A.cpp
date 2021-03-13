#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <set>
using namespace std;
set<int> sset;
bool unique(int x) {
	sset.clear();
	while (x>0) {
		int temp = x%10;
		if (sset.find(temp)==sset.end()) sset.insert(temp);
		else {
			return false;
		}
		x/=10;
	}
	return true;
}

int main() {
	int n;
	scanf("%d",&n);
	for (int i=n+1;i<=18000;i++) {
		if (unique(i)) {
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int accOne = 0;
	int accZero = 0;
	int temp;
	if (n==1) {
		scanf("%d",&temp);
		if (temp==1) printf("YES\n");
		else printf("NO\n");
	}
	else {
		for (int i=0;i<n;i++) {
			scanf("%d",&temp);
			if (temp==1) accOne++;
			if (temp==0) accZero++;
		}
		if (accZero==1) printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
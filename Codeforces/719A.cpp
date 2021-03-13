#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n;
	int a[100];
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	if (n==1) {
		if (a[0]==15) printf("DOWN\n");
		else if (a[0]==0) printf("UP\n");
		else printf("-1\n");
	}
	else {
		if (a[n-2]<a[n-1]) {
			if (a[n-1]==15) printf("DOWN\n");
			else printf("UP\n");
		}
		else if (a[n-2]>a[n-1]){
			if (a[n-1]==0) printf("UP\n");
			else printf("DOWN\n");
		}
		else printf("-1\n");
	}
	return 0;
}
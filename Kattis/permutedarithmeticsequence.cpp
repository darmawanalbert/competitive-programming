#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;
int main(void) {
	bool isArim,isPerm;
	int n,m,d;
	int a[105];
	scanf("%d",&n);
	for(int j=1;j<=n;j++) {
		scanf("%d",&m);
		for (int i=0;i<m;i++) {
			scanf("%d",&a[i]);
		}
		isArim = true;
		d = a[1]-a[0];
		for (int i=0;i<m-1;i++) {
			if (a[i+1]-a[i]!=d) {
				isArim = false;
				break;
			}
		}
		isPerm = true;
		sort(a,a + m);
		d = a[1]-a[0];
		for (int i=0;i<m-1;i++) {
			if (a[i+1]-a[i]!=d) {
				isPerm = false;
				break;
			}
		}
		if (isArim==true) {
			printf("arithmetic\n");
		}
		else if(isPerm==true) {
			printf("permuted arithmetic\n");
		}
		else {
			printf("non-arithmetic\n");
		}
	}
}
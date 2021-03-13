#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	//freopen("441.in","r",stdin);
	//freopen("441.out","w",stdout);
	int n;
	int a[15];
	int ctr = 0;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		if (ctr>0) printf("\n");
		ctr++;
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		for (int i=0;i<n-5;i++) {
			for (int j=i+1;j<n-4;j++) {
				for (int k=j+1;k<n-3;k++) {
					for (int l=k+1;l<n-2;l++) {
						for (int m=l+1;m<n-1;m++) {
							for (int b=m+1;b<n;b++) {
								printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m],a[b]);
							}
						}
					}
				}
			}
		}
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
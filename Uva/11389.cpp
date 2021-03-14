#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;
const int maks = 100;
int a[maks+5];
int b[maks+5];

bool comp(int a,int b) {
	return a>b;
}

int main() {
	//freopen("11389.in","r",stdin);
	//freopen("11389.out","w",stdout);
	int n,d,r;
	while (scanf("%d %d %d",&n,&d,&r)!=EOF) {
		if (n==0 && d==0 && r==0) break;
		int acc = 0;
		for (int i=0;i<n;i++) scanf("%d",&a[i]);
		sort(a,a+n);
		for (int i=0;i<n;i++) scanf("%d",&b[i]);
		sort(b,b+n,comp);
		for (int i=0;i<n;i++) {
			int res = a[i]+b[i];
			if (res>d) acc+=((res-d)*r);
		}
		printf("%d\n",acc);
 	}
 	//fclose(stdin);
 	//fclose(stdout);
	return 0;
}
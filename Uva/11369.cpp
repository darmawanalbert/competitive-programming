#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 20000;
int a[maks+5];
bool comp(int a,int b) {
	return a>b;
}

int main() {
	//freopen("11369.in","r",stdin);
	//freopen("11369.out","w",stdout);
	int n,t;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		for (int i=0;i<n;i++) {
			scanf("%d",&a[i]);
		}
		sort(a,a+n,comp);
		int acc = 0;
		for (int i=2;i<n;i+=3) {
			acc+=a[i];
		}
		printf("%d\n",acc);
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
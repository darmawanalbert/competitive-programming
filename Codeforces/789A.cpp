#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
const int maks = 100000;
int a[maks+5];

bool comp(int a,int b) {
	return a>b;
}
int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	int acc = 0;
	for (int i=0;i<n;i++) {
		if (a[i]%k==0) acc+=(a[i]/k);
		else acc+=((a[i]/k)+1);
	}
	if (acc%2==0) printf("%d\n",acc/2);
	else printf("%d\n",(acc/2)+1);
	return 0;
}
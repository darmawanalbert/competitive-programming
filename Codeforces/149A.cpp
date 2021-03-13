#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
int a[15];

bool comp(int a,int b) {
	return a>b;
}

int main() {
	int k;
	scanf("%d",&k);
	for (int i=0;i<12;i++) {
		scanf("%d",&a[i]);
	}
	sort(a,a+12,comp);
	int acc  = 0;
	int idx = 0;
	while (k>0 && idx<12) {
		k-=a[idx];
		idx++;
		acc++;
	}
	if (k>0) printf("-1\n");
	else printf("%d\n",acc);
	return 0;
}
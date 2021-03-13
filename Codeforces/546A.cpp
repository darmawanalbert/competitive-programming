#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int prefixsum[1005];
	prefixsum[1] = 1;
	for (int i=2;i<=1000;i++) prefixsum[i] = prefixsum[i-1]+i;
	int k,w,n;
	scanf("%d %d %d",&k,&n,&w);
	int tot = prefixsum[w]*k;
	if (n>=tot) printf("0\n");
	else printf("%d\n",abs(tot-n));
}
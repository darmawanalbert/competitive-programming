#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;

int prefix[10000];

void precompute() {
	prefix[1] = 1;
	for (int i=2;i<=10000;i++) prefix[i] = prefix[i-1]+i;
}

int main() {
	precompute();
	int n;
	scanf("%d",&n);
	int ctr = 0;
	while (n>0) {
		ctr++;
		n-=prefix[ctr];
	}
	if (n<0) ctr--;
	printf("%d\n",ctr);
	return 0;
}
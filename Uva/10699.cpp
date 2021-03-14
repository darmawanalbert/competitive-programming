#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;
const int maks = 1000000;
int a[maks+5];

void sieve() {
	memset(a,0,sizeof(a));
	for (int i=2;i<=maks;i++) {
		if (a[i]==0) {
			for (int j=i;j<=maks;j+=i) a[j]++;
		}
	}
}

int main() {
	int n;
	sieve();
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		printf("%d : %d\n",n,a[n]);
	}
	
	return 0;
}
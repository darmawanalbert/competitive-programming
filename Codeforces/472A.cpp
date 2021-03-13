#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
const int maks = 1000000;
bool isprime[maks+5];

void sieve() {
	memset(isprime,true,sizeof(isprime));
	isprime[0] = isprime[1] = false;
	for (int i=4;i<=maks;i+=2) isprime[i] = false;
	for (int i=3;i*i<=maks;i+=2) {
		if (isprime[i]) {
			for (int j=i*i;j<=maks;j+=i) isprime[j] = false;
		}
	}
}

int main() {
	sieve();
	int n;
	scanf("%d",&n);
	for (int i=4;i<=n;i++) {
		if (!isprime[i]&& !isprime[n-i]) {
			printf("%d %d\n",i,n-i);
			break;
		}
	}
	return 0;
}
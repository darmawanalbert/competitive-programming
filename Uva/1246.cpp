#include <cstdio>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

const int maks = 10000;
bool isprime[maks+5];
int numdiv[maks+5];

void sieve() {
	int power,tmp;
	for (int i=0;i<=maks;i++) numdiv[i] = 1;
	for (int i=2;i<=maks;i++) {
		if (numdiv[i]==1) {
			for (int j=i;j<=maks;j+=i) {
				power = 0;
				tmp = j;
				while (tmp%i==0) {
					tmp/=i;
					power++;
				}
				numdiv[j]*=(power+1);
			}
		}
	} 
	
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
	int t,kiri,kanan;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&kiri,&kanan);
		int ctr = 0;
		for (int i=kiri;i<=kanan;i++) {
			if (isprime[numdiv[i]]) {
				if (ctr>0) printf(" ");
				printf("%d",i);
				ctr++;
			}
		}
		if (ctr==0) printf("-1");
		printf("\n");
	}
	return 0;
}
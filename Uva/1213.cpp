#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define pb push_back

using namespace std;
const int maks = 1120;
bool isprime[maks+5];
vector<int> primes;
int memo[200][14+5][maks+5];

int dp(int idx,int k,int n) {
	if (n<0) return 0;
	if (n==0) return (k==0);
	if (k==0) return (n==0);
	if (idx<0) return (n==0&&k==0);
	int &rem = memo[idx][k][n];
	if (rem!=-1) return rem;
	return rem = dp(idx-1,k-1,n-primes[idx])+dp(idx-1,k,n);
}

void sieve() {
	primes.clear();
	memset(isprime,true,sizeof(isprime));
	isprime[0] = isprime[1] = false;
	for (int i=4;i<=maks;i+=2) isprime[i] = false;
	for (int i=3;i*i<=maks;i+=2) {
		if (isprime[i]) {
			for (int j=i*i;j<=maks;j+=i) isprime[j] = false;
		}
	}
	primes.pb(2);
	for (int i=3;i<=maks;i+=2) if (isprime[i]) primes.pb(i);
}
int main() {
	int n,k;
	sieve();va	int len = primes.size();
	while (scanf("%d %d",&n,&k)!=EOF) {
		if (n==0 && k==0) break;
		if (k<=0 || n<=1) cout << "0" << endl;
		else {
			memset(memo,-1,sizeof(memo));
			cout << dp(len,k,n) << endl;
		}
	}
 	return 0;
}
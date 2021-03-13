#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 100000;
int price[maks+5];

int main() {
	int n;
	int val;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&price[i]);
	}
	sort(price,price+n);
	
	int q;
	scanf("%d",&q);
	while (q--) {
		scanf("%d",&val);
		int lo = 0;
		int hi = n-1;
		int bound = -1;
		int mid;
		while (lo<=hi) {
			mid = lo + (hi-lo)/2;
			if (val>=price[mid]) {
				lo = mid+1;
				bound = mid;
			}
			else hi= mid-1;
		}
		if (bound==-1) printf("0\n");
		else printf("%d\n",bound+1);
	}
	return 0;
}
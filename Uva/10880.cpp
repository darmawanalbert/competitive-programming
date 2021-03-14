#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define pb push_back
using namespace std;
typedef long long ll;

vector<int> divisors;

int main() {
	int n,c,r;
	scanf("%d",&n);
	for (int j=1;j<=n;j++) {
		divisors.clear();
		scanf("%d %d",&c,&r);
		printf("Case #%d:",j);
		if (c<=r) printf(" 0\n");
		else {
			c-=r;
			for (int i=1;i*i<=c;i++) {
				if (c%i==0) {
					if (i>r) divisors.pb(i);
					if ((c/i)>r && ((c/i)!=i)) divisors.pb(c/i);
				}
			}
			sort(divisors.begin(),divisors.end());
			if (divisors.size()>0) {
				for (int i=0;i<divisors.size();i++) {
					printf(" %d",divisors[i]);
					if (i==divisors.size()-1)  printf("\n");
				}	
			}
			else printf("\n");

		}
	}
}
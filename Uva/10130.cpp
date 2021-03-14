#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
const int maks = 1000;
int w[maks+5];
int val[maks+5];

int memo[maks+5][35];

int dp(int idx,int cap) {
	if (cap<0) return -123;
	if (idx<0) return 0;
	int &rem = memo[idx][cap];
	if (rem!=-1) return rem;
	return rem = max(dp(idx-1,cap),dp(idx-1,cap-w[idx])+val[idx]);
}

int main() {
	int t,n,g,temp;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		for (int i=0;i<n;i++) scanf("%d %d",&val[i],&w[i]);
		scanf("%d",&g);
		int sum = 0;
		for (int i=0;i<g;i++) {
			scanf("%d",&temp);
			memset(memo,-1,sizeof(memo));
			sum+=dp(n-1,temp);
		}
		cout << sum << endl;
	}
	return 0;
}
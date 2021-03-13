#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 100;
int a[maks+5];
int memo[maks+5][5][5];
int n;

int dp(int idx,int contest,int gym) {
	if (idx>=n) return 0; 
	int &rem = memo[idx][contest][gym];
	if (rem!=-1) return rem;
	if (a[idx]==0) rem = dp(idx+1,0,0)+1;
	else if (a[idx]==1) {
		if (contest==1) rem = dp(idx+1,0,0)+1;
		else if (contest==0) {
			rem = dp(idx+1,1,0);
			rem = min(rem,dp(idx+1,0,0)+1);
		}
	}
	else if (a[idx]==2) {
		if (gym==1) return rem = dp(idx+1,0,0)+1;
		else if (gym==0) {
			rem = dp(idx+1,0,1);
			rem = min(rem,dp(idx+1,0,0)+1);
		}
	}
	else if (a[idx]==3) {
		if (contest==1 && gym==0) {
			rem = dp(idx+1,0,0)+1;
			rem = min(rem,dp(idx+1,0,1));
		}
		else if (contest==0 && gym==1) {
			rem = dp(idx+1,0,0)+1;
			rem = min(rem,dp(idx+1,1,0));
		}
		else if (contest==0 && gym==0) {
			rem = dp(idx+1,0,1);
			rem = min(rem,dp(idx+1,1,0));
			rem = min(rem,dp(idx+1,0,0)+1);
		}
	}
	return rem;
}

int main() {
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	memset(memo,-1,sizeof(memo));
	cout << dp(0,0,0) << endl;
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;

ll ans[10][10];

void precompute() {
	ans[0][0] = 1;
	ans[0][1] = 0;
	ans[0][2] = 2;
	ans[1][0] = 1;
	ans[1][1] = 2;
	ans[1][2] = 0;
	ans[2][0] = 2;
	ans[2][1] = 1;
	ans[2][2] = 0;
	ans[3][0] = 2;
	ans[3][1] = 0;
	ans[3][2] = 1;
	ans[4][0] = 0;
	ans[4][1] = 2;
	ans[4][2] = 1;
	ans[5][0] = 0;
	ans[5][1] = 1;
	ans[5][2] = 2;
}

int main() {
	precompute();
	ll n,x;
	scanf("%lld",&n);
	scanf("%lld",&x);
	printf("%lld\n",ans[(n-1)%6][x]);
	return 0;
}
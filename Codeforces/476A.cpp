#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
const int INF = 1e9;
int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int mini = INF;
	for (int x=0;x<=10000;x++) {
		if (2*x > n) break;
		int y = n-(2*x);
		int sum = x+y;
		if (sum%m==0) mini = min(mini,sum);
	}
	if (mini==INF) printf("%d\n",-1);
	else printf("%d\n",mini);
	return 0;
}
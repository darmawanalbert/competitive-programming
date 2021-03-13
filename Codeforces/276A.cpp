#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;
const int INF = 1e9;
int main() {
	int n,k;
	int f,t;
	scanf("%d %d",&n,&k);
	int maxi = -INF;
	for (int i=0;i<n;i++) {
		scanf("%d %d",&f,&t);
		if (t>k) {
			maxi = max(maxi,f-(t-k));
		}
		else maxi = max(maxi,f);
	}
	printf("%d\n",maxi);
	return 0;
}
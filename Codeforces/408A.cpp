#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#define pb push_back
using namespace std;
const int INF = 1e9;
const int maks = 100;
int numItem[maks+5];
int main() {
	int n;
	int temp;
	int minimum = INF;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&numItem[i]);
	for (int i=0;i<n;i++) {
		int ans = 0;
		for (int j=0;j<numItem[i];j++) {
			scanf("%d",&temp);
			ans+=(5*temp);
			ans+=15;
		}
		minimum = min(minimum,ans);
	}
	printf("%d\n",minimum);
	
	return 0;
}
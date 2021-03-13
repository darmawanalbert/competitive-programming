#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <utility>
#define mp make_pair
#define ff first
#define ss second
using namespace std;
const int INF = 1e9;
const int maks = 1000;
pair<int,int> a[maks+5];
int main() {
	int n;
	int maximum = -INF;
	scanf("%d",&n);
	int acc = 0;
	for (int i=0;i<n;i++) {
		scanf("%d %d",&a[i].ff,&a[i].ss);
		acc-=a[i].ff;
		acc+=a[i].ss;
		maximum = max(maximum,acc);
	}
	printf("%d\n",maximum);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>
#include <utility>
#define mp make_pair
#define ff first
#define ss second
using namespace std;
const int maks = 100000;
pair<int,int> a[maks+5];
int main() {
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d %d",&a[i].ff,&a[i].ss);
	int acc = a[0].ff*a[0].ss;
	int price = a[0].ss;
	for (int i=1;i<n;i++) {
		if (a[i].ss<price) price = a[i].ss;
		acc+=(a[i].ff*price);
	}
	printf("%d\n",acc);
	return 0;
}
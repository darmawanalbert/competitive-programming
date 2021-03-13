#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <utility>
#define mp make_pair
#define ff first
#define ss second
using namespace std;
const int maks = 1000;
pair<int,int> a[maks+5];

bool comp(pair<int,int> a,pair<int,int> b) {
	if (a.ss==b.ss) return a.ff>b.ff;
	return a.ss > b.ss;
}

int main() {
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d %d",&a[i].ff,&a[i].ss);
	sort(a,a+n,comp);
	int ctr = 1;
	int acc = 0;
	for (int i=0;i<n;i++) {
		if (ctr<=0) break;
		acc+=a[i].ff;
		ctr+=a[i].ss;
		ctr--;
	}
	printf("%d\n",acc);
}
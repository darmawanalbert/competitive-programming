#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <cstdio>
#include <utility>
#include <vector>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;
const int maks =50;
pair<int,int> a[maks+5];
bool comp(pair<int,int> a,pair<int,int> b) {
	if (a.ff==b.ff) return a.ss<b.ss;
	return a.ff > b.ff;
}

int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++) {
		scanf("%d %d",&a[i].ff,&a[i].ss);
	}
	sort(a,a+n,comp);
	int first = a[k-1].ff;
	int second = a[k-1].ss;
	int lo = 0;
	int hi = 0;
	for (int i=0;i<n;i++) {
		if (a[i].ff==first && a[i].ss==second) {
			lo = i;
			break;
		}
	}
	for (int i=n-1;i>=0;i--) {
		if (a[i].ff==first && a[i].ss==second) {
			hi = i;
			break;
		}
	}
	printf("%d\n",hi-lo+1);
	return 0;
}
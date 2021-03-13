#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
using namespace std;

const int maks = 100;
pair<int,int> a[maks+5];
int main() {
	int n;
	int temp;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		a[i] = mp(temp,i+1);
	}
	sort(a,a+n);
	int idx = n-1;
	for (int i=0;i<n/2;i++) {
		printf("%d %d\n",a[i].ss,a[idx].ss);
		idx--;
	}
	return 0;
}
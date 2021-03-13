#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;
const int maks = 100;
int a[maks+5];

bool comp(int a,int b) {
	return a>b;
}

int main() {
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	sort(a,a+n,comp);
	int acc = 0;
	int idx = 0;
	while (m>0 && idx<n) {
		m-=a[idx];
		idx++;
		acc++;
	}
	printf("%d\n",acc);
	return 0;
}
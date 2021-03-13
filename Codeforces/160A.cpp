#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;
const int maks = 100;
int a[maks+5];

bool comp(int a,int b) {
	return a>b;
}
int main() {
	int n;
	scanf("%d",&n);
	int acc = 0;
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		acc+=a[i];
	}
	sort(a,a+n,comp);
	int sum = 0;
	int num = 0;
	int idx = 0;
	while (sum<=acc && idx<n) {
		acc-=a[idx];
		sum+=a[idx];
		num++;
		idx++;
	}
	printf("%d\n",num);
	return 0;
}
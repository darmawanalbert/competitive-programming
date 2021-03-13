#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 100000;
double a[maks+5];

bool comp(double a,double b) {
	return a>b;
}

int main() {
	int n;
	double n1,n2;
	scanf("%d %lf %lf",&n,&n1,&n2);
	for (int i=0;i<n;i++) scanf("%lf",&a[i]);
	sort(a,a+n,comp);
	double ff = 0.0;
	double ss = 0.0;
	if (n1<=n2) {
		for (int i=0;i<n1;i++) {
			ff+=a[i];
		}
		ff/=n1;
		for (int i=n1;i<n2+n1;i++) ss+=a[i];
		ss/=n2;
		printf("%.8lf\n",ff+ss);
	}
	else {
		for (int i=0;i<n2;i++) {
			ff+=a[i];
		}
		ff/=n2;
		for (int i=n2;i<n1+n2;i++) ss+=a[i];
		ss/=n1;
		printf("%.8lf\n",ff+ss);
	}
	return 0;
}
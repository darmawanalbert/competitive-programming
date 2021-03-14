#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

const double PI = acos(-1);

int main() {
	double r,n;
	while (scanf("%lf %lf",&r,&n)!=EOF) {
		double deg = (360.0/n);
		deg = deg*PI/180.0;
		double sinan = sin(deg);
		double area = (r*r*sinan)/2.0;
		double res = n*area;
		printf("%.3lf\n",res);
		
	}
	return 0;
}
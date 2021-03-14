#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	double a,b,c;
	while (scanf("%lf %lf %lf",&a,&b,&c)!=EOF) {
		double area;
		if (a==0 && b==0 && c==0) {
			printf("The radius of the round table is: %.3lf\n",0.000);
		}
		else {
			double p = a+b+c;
			double s = p/2.0;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
			printf("The radius of the round table is: %.3lf\n",area/(0.5*p));
		}
	}
	return 0;
}
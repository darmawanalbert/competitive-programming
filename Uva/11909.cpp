#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const double PI = acos(-1);
const double EPS = 1e-9;

double toRad(double x) {
	return x*PI/180.0;
}

int main() {
	double l,w,h,theta;
	while (scanf("%lf %lf %lf %lf",&l,&w,&h,&theta)!=EOF) {
		double hnow = l*tan(toRad(theta));
		if (hnow<=h) {
			double init = l*w*h;
			double now = w*0.5*l*hnow;
			double remain = init-now;
			printf("%.3lf mL\n",remain);
		}
		else {
			printf("%.3lf mL\n",w*0.5*h*h/tan(toRad(theta)));
		}
		
	}
	return 0;
}
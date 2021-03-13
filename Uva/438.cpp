#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;
const double PI = acos(-1);
const double EPS = 1e-9;
struct point {
	double x,y;
	point() {x=y=0.0;}
	point(double _x,double _y):x(_x),y(_y) {}
};

double dist(point a,point b) {
	return hypot(a.x-b.x,a.y-b.y);
}

int main() {
	double x1,y1,x2,y2,x3,y3;
	while (scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3)!=EOF) {
		point p1(x1,y1);
		point p2(x2,y2);
		point p3(x3,y3);
		double a = dist(p1,p2);
		double b = dist(p2,p3);
		double c = dist(p3,p1);
		double s = (a+b+c)/2.0;
		double area = sqrt(s*(s-a)*(s-b)*(s-c));
		double r = (a*b*c)/(4.0*area);
		double circum = 2*PI*r;
		printf("%.2lf\n",circum);
	}
	return 0;
}
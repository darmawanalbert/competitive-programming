#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>

using namespace std;
const double PI = acos(-1);
const double EPS = 1e-9;
int main() {
	double a,b,c;
	while (scanf("%lf %lf %lf",&a,&b,&c)!=EOF) {
		double p = a+b+c;
		double s = p/2.0;
		double area = sqrt(s*(s-a)*(s-b)*(s-c));
		double rIn = area/(0.5*p);
		double rCircum = a*b*c/ (4.0*area);
		
		double merah = rIn*rIn*PI;
		double biru = area-merah;
		double kuning = rCircum*rCircum*PI-area;
		printf("%.4lf %.4lf %.4lf\n",kuning,biru,merah);
	}
	return 0;
}
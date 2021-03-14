#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
const double earth = 6440.0;
const double PI = acos(-1.0);

double toRad(double theta) {
	return theta*PI/180.0;
}
int main() {
	double s,a;
	string line;
	while (cin >> s >> a >> line) {
		s+=earth;
		double circum = PI*2*s;
		if (line=="min") a/=60.0;
		if (a>180.0) a = 360.0-a;
		double rad = toRad(a); 
		double arc = a/360.0*circum;
		double chord = sqrt(2*s*s*(1-cos(rad)));
		printf("%.6lf %.6lf\n",arc,chord);
	}
	return 0;
}
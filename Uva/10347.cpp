#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const double EPS = 1e-9;
int main() {
	double a,b,c;
	while (scanf("%lf %lf %lf",&a,&b,&c)!=EOF) {
		if (a < EPS || b<EPS || c<EPS) cout << "-1.000" << endl;
		else {
			double s = (a+b+c)/2.0;
			double area = (4.0/3.0)*sqrt(s*(s-a)*(s-b)*(s-c));
			if (area>0) printf("%.3lf\n",area);
			else printf("-1.000\n");
		}
	}
	return 0;
}
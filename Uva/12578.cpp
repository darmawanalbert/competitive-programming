#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
const double PI = acos(-1.0);
int main() {
	int t;
	int len;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&len);
		if (len<=0) printf("%.2lf %.2lf\n",0.00,0.00);
		else {
			double l = (double) len;
			double r = l/5;
			double w = 0.6*l;
			double circle = PI*r*r;
			double green = l*w-circle;
			printf("%.2lf %.2lf\n",circle,green);
		}
		
	}
	
	return 0;
}
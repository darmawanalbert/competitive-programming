#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
const int INF = 1e9;
double x[60005];
double v[60005];
int n;
double maximumtime(double xx) {
	double ans = 0.0;
	for (int i=0;i<n;i++) ans = max(ans,fabs(xx-x[i])/v[i]);
	return ans;
}

int main() {
	double maks = -1.0*INF;
	double mini = 1.0*INF;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%lf",&x[i]);
		maks = max(maks,x[i]);
		mini = min(mini,x[i]);
	}
	for (int i=0;i<n;i++) scanf("%lf",&v[i]);
	double lo = mini;
	double hi = maks;
	double mid1,mid2;
	for (int i=0;i<200;i++) {
		mid1 = lo + (hi-lo)/3.0;
		mid2 = mid1+ (hi-lo)/3.0;
		if (maximumtime(mid1)<maximumtime(mid2)) hi = mid2;
		else {
			lo = mid1;
		}
	}
	printf("%.12lf\n",maximumtime(lo));
	return 0;
}
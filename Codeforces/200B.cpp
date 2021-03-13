#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int n;
	double sum = 0.0;
	double temp;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%lf",&temp);
		sum+=temp;
	}
	sum = sum / (double) n;
	printf("%.12lf\n",sum);
	return 0;
}
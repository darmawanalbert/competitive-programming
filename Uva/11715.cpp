#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <queue>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;

int main() {
	int n;
	double u,v,a,s,t;
	int idx = 1;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		printf("Case %d: ",idx++);
		if (n==1) {
			scanf("%lf %lf %lf",&u,&v,&t);
			a = (v-u)/t;
			s = u*t+(0.5*a*t*t);
			printf("%.3lf %.3lf\n",s,a);
		}
		else if (n==2) {
			scanf("%lf %lf %lf",&u,&v,&a);
			t =(v-u)/a;
			s = u*t+(0.5*a*t*t);
			printf("%.3lf %.3lf\n",s,t);
		}
		else if (n==3) {
			scanf("%lf %lf %lf",&u,&a,&s);
			v = sqrt(u*u+2*a*s);
			t = (v-u)/a;
			printf("%.3lf %.3lf\n",v,t);
		}
		else if (n==4) {
			scanf("%lf %lf %lf",&v,&a,&s);
			u = sqrt(v*v-2*a*s);
			t = (v-u)/a;
			printf("%.3lf %.3lf\n",u,t);
		}
	}
	return 0;
}
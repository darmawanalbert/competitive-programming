#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
const double PI = acos(-1);
const double EPS = 1e-9;
struct point {
	double x,y;
	point() {x=y=0.0;}
	point(double _x,double _y) : x(_x),y(_y) {}
	bool operator < (point other) const {
		if (fabs(x-other.x) > EPS) return x<other.x;
		return y<other.y;
	}
	bool operator == (point other) const {
		return (fabs(x-other.x) < EPS && fabs(y-other.y) < EPS);
	}
};

struct line {
	double a,b,c;
	line() {a=b=c=0.0;}
	line(double _a,double _b,double _c) : a(_a),b(_b),c(_c) {}
};

void pointsToLine(point p1,point p2,line &l) {
	if (fabs(p1.x-p2.x) < EPS) {
		l.a = 1.0;
		l.b = 0.0;
		l.c = -p1.x;
	}
	else {
		l.a = - (double) (p1.y-p2.y)/(p1.x-p2.x);
		l.b = 1.0;
		l.c = - (double) (l.a*p1.x)-p1.y;
	}
}

bool areParallel(line l1,line l2) {
	return (fabs(l1.a-l2.a)<EPS && fabs(l1.b-l2.b) < EPS);
}

bool areSame(line l1,line l2) {
	return (areParallel(l1,l2) && fabs(l1.c-l2.c) < EPS);
}

void areIntersect(line l1,line l2,point &p) {
	p.x = (l2.b*l1.c - l1.b*l2.c)/(l2.a*l1.b - l1.a*l2.b);
	if (fabs(l1.b) > EPS) p.y = -(l1.a * p.x + l1.c);
	else p.y = -(l2.a * p.x + l2.c);
}

int main() {
	int n;
	point p1,p2,p3,p4;
	point res;
	line l1,l2;
	scanf("%d",&n);
	printf("INTERSECTING LINES OUTPUT\n");
	for (int i=0;i<n;i++) {
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&p1.x,&p1.y,&p2.x,&p2.y,&p3.x,&p3.y,&p4.x,&p4.y);		pointsToLine(p1,p2,l1);
		pointsToLine(p3,p4,l2);
		if (areSame(l1,l2)) printf("LINE\n");
		else if (areParallel(l1,l2)) printf("NONE\n");
		else {
			areIntersect(l1,l2,res);
			printf("POINT %.2lf %.2lf\n",res.x,res.y);
		}
	}
	printf("END OF OUTPUT\n");
	
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;
const double EPS = 1e-9;
const double PI = acos(-1);
struct point {
	double x,y;
	point() {x=y=0.0;}
	point(double _x,double _y):x(_x),y(_y) {}
	bool operator < (point other) const {
		if (fabs(x-other.x) > EPS) return x<other.x;
		return y<other.y; 
	}
	bool operator == (point other) const {
		return (fabs(x-other.x) < EPS && fabs(y-other.y) < EPS);
	}
};


double dist(point a,point b) {
	return hypot(a.x-b.x,a.y-b.y);
}

struct vec {
	double x,y;
	vec() {x=y=0.0;}
	vec(double _x,double _y):x(_x),y(_y) {}
};

vec toVec(point p1,point p2) {
	return vec(p2.x-p1.x,p2.y-p1.y);
}

double cross(vec a,vec b) {
	return a.x*b.y - a.y*b.x;
}

bool ccw(point p, point q,point r) {
	return (cross(toVec(p,q),toVec(p,r)) > 0);
}

bool collinear(point p,point q,point r) {
	return fabs(cross(toVec(p,q),toVec(p,r))) < EPS;
}

double area(const vector<point> &P) {
	double res = 0.0;
	double x1,y1,x2,y2;
	for (int i=0;i<(int)P.size()-1;i++) {
		x1 = P[i].x;
		x2 = P[i+1].x;
		y1 = P[i].y;
		y2 = P[i+1].y;
		res+=(x1*y2 - x2*y1);
	}
	return fabs(res)/2.0;
}

point pivot(0,0);
bool cmp(point a,point b) {
	if (collinear(pivot,a,b)) return dist(pivot,a) < dist(pivot,b);
	double d1x = a.x - pivot.x;
	double d1y = a.y - pivot.y;
	double d2x = b.x - pivot.x;
	double d2y = b.y - pivot.y;
	return (atan2(d1y,d1x)-atan2(d2y,d2x)) < EPS;
}

vector<point> grahamscan(vector<point> P) {
	int i,j;
	int n = P.size();
	if (n<=3) {
		if (!(P[0]==P[n-1])) P.pb(P[0]);
		return P;
	}
	
	int p0 = 0;
	for (i=1;i<n;i++) {
		if (P[i].y < P[p0].y || (P[i].y==P[p0].y && P[i].x > P[p0].x)) p0 = i;
	}
	
	point temp = P[0];
	P[0] = P[p0];
	P[p0] = temp;
	
	pivot = P[0];
	sort(++P.begin(),P.end(),cmp);
	
	vector<point> st;
	st.pb(P[n-1]);
	st.pb(P[0]);
	st.pb(P[1]);
	i = 2;
	while (i<n) {
		j = st.size()-1;
		if (ccw(st[j-1],st[j],P[i])) st.pb(P[i++]);
		else st.pop_back();
	}
	return st;
}

vector<point> vp;
int main() {
	int n;
	int ctr = 1;
	double xx,yy;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		vp.clear();
		for (int i=0;i<n;i++) {
			scanf("%lf %lf",&xx,&yy);
			vp.pb(point(xx,yy));
		}
		vp.pb(vp[0]);
		double init = area(vp);
		vp = grahamscan(vp);
		double now = area(vp);
		double res = (now-init)*100.0/now;
		printf("Tile #%d\n",ctr);
		ctr++;
		printf("Wasted Space = %.2lf %%\n\n",res);
	}
	return 0;
}
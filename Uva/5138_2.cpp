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
		return (fabs(x-other.x)<EPS && fabs(y-other.y)<EPS);
	}
};

vector<point> polygon;


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

double area(point aa,point bb,point cc) {
	vector<point> vp;
	vp.pb(aa);
	vp.pb(bb);
	vp.pb(cc);
	double res = 0.0;
	double x1,y1,x2,y2;
	for (int i=0;i<(int)vp.size()-1;i++) {
		x1 = vp[i].x;
		x2 = vp[i+1].x;
		y1 = vp[i].y;
		y2 = vp[i+1].y;
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

double minimum;

double diameter(const vector<point> &p) {
    vector<point> h = p;
    int m = h.size();
    if (m == 1)
        return 0;
    if (m == 2)
        return dist(h[0], h[1]);
    int k = 1;
    while (area(h[m - 1], h[0], h[(k + 1) % m]) > area(h[m - 1], h[0], h[k]))
        ++k;
    double res = 1000005.0;
    for (int i = 0, j = k; i <= k && j < m; i++) {
        res = min(res, dist(h[i], h[j]));
        while (j < m && area(h[i], h[(i + 1) % m], h[(j + 1) % m]) > area(h[i], h[(i + 1) % m], h[j])) {
            res = min(res, dist(h[i], h[(j + 1) % m]));
            ++j;
        }
    }
    return res;
}

int main() {
	int n;
	double x,y;
	int idx = 1;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		polygon.clear();
		for (int i=0;i<n;i++) {
			scanf("%lf %lf",&x,&y);
			polygon.pb(point(x,y));
		}
		polygon.pb(polygon[0]);
		polygon = grahamscan(polygon);
		int len = polygon.size();
		for (int i=0;i<polygon.size();i++) {
			cout << polygon[i].x << " " << polygon[i].y << endl;
		}
		if (len==4) {
			minimum = 1000005.0;
			double luas = area(polygon[0],polygon[1],polygon[2]);
			minimum = min(minimum,(2.0*luas/dist(polygon[0],polygon[1])));
			minimum = min(minimum,(2.0*luas/dist(polygon[1],polygon[2])));
			minimum = min(minimum,(2.0*luas/dist(polygon[2],polygon[3])));
		}
		else {
			double minimum = diameter(polygon);
		}
		printf("Case %d: %.2lf\n",idx,minimum);
		idx++;
	}
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <stack>
#define pb push_back

using namespace std;
typedef double coord_t;
typedef double coord2_t;
const double PI = acos(-1);
const double EPS = 1e-9;

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


vector< point > polygon;

struct vec {
	double x,y;
	vec() {x=y=0.0;}
	vec(double _x,double _y):x(_x),y(_y) {}
};

vec toVec(point p1,point p2) {
	return vec(p2.x-p1.x,p2.y-p1.y);
}

double cross2(vec a,vec b) {
	return a.x*b.y - a.y*b.x;
}

double dist(point p1,point p2) {
	return hypot(p1.x-p2.x,p1.y-p2.y);
}

double cross(const point &O, const point &A, const point &B)
{
	return (A.x - O.x) * (B.y - O.y) - (A.y - O.y) * (B.x - O.x);
}

vector<point> convex_hull(vector<point> P)
{
	int n = P.size(), k = 0;
	if (n == 1) return P;
	vector<point> H(2*n);

	sort(P.begin(), P.end());

	for (int i = 0; i < n; ++i) {
		while (k >= 2 && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
		H[k++] = P[i];
	}

	for (int i = n-2, t = k+1; i >= 0; i--) {
		while (k >= t && cross(H[k-2], H[k-1], P[i]) <= 0) k--;
		H[k++] = P[i];
	}

	H.resize(k-1);
	return H;
}

double area(point p1,point p2,point p3) {
	double ab = dist(p1,p2);
	double ac = dist(p1,p3);
	double bc = dist(p2,p3);
	double s = ab+ac+bc;
	s/=2.0;
	double ans = sqrt(s*fabs(s-ab)*fabs(s-ac)*fabs(s-bc));
	return ans;
}

double minimum;

void minWidth() {
	int i0 = polygon.size()-1;
	int i = 0;
	int j = i+1;
	while (area(polygon[i],polygon[i+1],polygon[j+1]) > area(polygon[i],polygon[i+1],polygon[j])) {
		j++;
		j0 = j;
		while (j!=i0) {
			i++;
			minimum = min(minimum,dist(polygon[i],polygon[j]));
			while (area(polygon[i],polygon[i+1],polygon[j+1]) > area(polygon[i],polygon[i+1],polygon[j])) {
				j++;
				if (fabs(dist(polygon[i],polygon[j])-dist(polygon[j0],polygon[i0])) > EPS) {
					minimum = min(minimum,dist(polygon[i],polygon[j]));
				}
				else return;
			}
			if (fabs(area(polygon[j],polygon[i+1],polygon[j+1])-area(polygon[i],polygon[i+1],polygon[j])) < EPS) {
				if (fabs(dist(polygon[i],polygon[j])-dist(polygon[j0],polygon[i0])) > EPS) {
					minimum = min(minimum,dist(polygon[i],polygon[j+1]));
				}
				else {
					minimum = min(minimum,dist(polygon[i+1],polygon[j]));
				}
			}
		}
	}
}


int main() {
	int n;
	double temp1,temp2;
	int ctr = 1;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		minimum = 1000005.0;
		polygon.clear();
		for (int i=0;i<n;i++) {
			scanf("%lf %lf",&temp1,&temp2);
			polygon.pb(point(temp1,temp2));
		}
		polygon.pb(polygon[0]);
		if (polygon.size()==4) {
			double luas = area(polygon[0],polygon[1],polygon[2]);
			minimum = min(minimum,(2.0*luas/dist(polygon[0],polygon[1])));
			minimum = min(minimum,(2.0*luas/dist(polygon[1],polygon[2])));
			minimum = min(minimum,(2.0*luas/dist(polygon[2],polygon[3])));
		}
		else {
			polygon = convex_hull(polygon);
			minWidth();
		}
 		printf("Case %d: %.2lf\n",ctr,minimum);
		ctr++;
	}
	return 0;
}
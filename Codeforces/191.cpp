#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

struct point {
	int x,y;
	point() {x=y=0.0;}
	point(int _x,int _y):x(_x),y(_y) {}
};
// Given three colinear points p, q, r, the function checks if
// point q lies on line segment 'pr'
bool onSegment(point p, point q, point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;
    return false;
}
 
// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are colinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int orientation(point p, point q, point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
    if (val == 0) return 0;  // colinear
    return (val > 0)? 1: 2; // clock or counterclock wise
}
 
// The main function that returns true if line segment 'p1q1'
// and 'p2q2' intersect.
bool doIntersect(point p1, point q1, point p2, point q2)
{
    // Find the four orientations needed for general and
    // special cases
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);
    // General case
    if (o1 != o2 && o3 != o4)
        return true;
    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    // p1, q1 and p2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    return false; // Doesn't fall in any of the above cases
}

int main() {
	int t;
	int kiri,kanan,atas,bawah;
	point a,b,aa,bb,cc,dd;
	point temp;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d",&a.x,&a.y);
		scanf("%d %d",&b.x,&b.y);
		scanf("%d %d %d %d",&kiri,&atas,&kanan,&bawah);
		aa.x = kiri;
		aa.y = atas;
		bb.x = kanan;
		bb.y = atas;
		cc.x = kanan;
		cc.y = bawah;
		dd.x = kiri;
		dd.y = bawah;
		bool toggle = false;
		if (a.x>=kiri && a.x<=kanan && a.y>=bawah && a.y<=atas) {
			if (b.x>=kiri && b.x<=kanan && b.y>=bawah && b.y<=atas) toggle = true; 
		}
		else {
			if (doIntersect(a,b,aa,bb)) toggle = true;
			if (doIntersect(a,b,bb,cc)) toggle = true;
			if (doIntersect(a,b,cc,dd)) toggle = true;
			if (doIntersect(a,b,aa,dd)) toggle = true;
		}
		if (toggle) cout << "T" << endl;
		else cout << "F" << endl;
	}
	return 0;
}
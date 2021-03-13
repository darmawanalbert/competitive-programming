#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <set>
using namespace std;
set<int> sset;
int main() {
	sset.clear();
	int x1,y1,x2,y2;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	sset.insert(x1);
	sset.insert(y1);
	sset.insert(x2);
	sset.insert(y2);
	if (sset.size()>2) printf("-1\n");
	else {
		int ff = x1;
		int ss;
		if (x2!=x1) ss = x2;
		else if (y1!=x1) ss = y1;
		else if (y2!=x1) ss = y2;
		int idx = 1;
		if ((ff!=x1 || ff!=y1) && (ff!=x2 || ff!=y2) ) {
			printf("%d %d",ff,ff);
			if (idx==1) {
				printf(" ");
				idx++;
			}
			else if (idx==2) {
				printf("\n");
				idx++;
			}
		}
		if ((ss!=x1 || ss!=y1) && (ss!=x2 || ss!=y2) ) {
			printf("%d %d",ss,ss);
			if (idx==1) {
				printf(" ");
				idx++;
			}
			else if (idx==2) {
				printf("\n");
				idx++;
			}
		}
		if ((ff!=x1 || ss!=y1) && (ff!=x2 || ss!=y2) ) {
			printf("%d %d",ff,ss);
			if (idx==1) {
				printf(" ");
				idx++;
			}
			else if (idx==2) {
				printf("\n");
				idx++;
			}
		}
		if ((ss!=x1 || ff!=y1) && (ss!=x2 || ff!=y2) ) {
			printf("%d %d",ss,ff);
			if (idx==1) {
				printf(" ");
				idx++;
			}
			else if (idx==2) {
				printf("\n");
				idx++;
			}
		}
	}
	return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <cstdio>

using namespace std;
int main() {
	int n;
	int h,m;
	scanf("%d",&n);
	int hh = 24;
	int mm = 24;
	int acc = 1;
	int maxi = 1;
	for (int i=0;i<n;i++) {
		scanf("%d %d",&h,&m);
		if (h==hh && mm==m) {
			acc++;
			maxi = max(acc,maxi);
		}
		else {
			acc = 1;
			hh = h;
			mm = m;
		}
	}
	cout << maxi << endl;
 	
	return 0;
}
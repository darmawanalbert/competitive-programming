#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
const int maks = 5;
int a[maks+5];
int main() {
	while (scanf("%d %d %d",&a[0],&a[1],&a[2])!=EOF) {
		if (a[0]==0 && a[1]==0 && a[2]==0) break;
		sort(a,a+3);
		if (a[0]*a[0]+a[1]*a[1]==a[2]*a[2]) cout << "right" << endl;
		else cout << "wrong" << endl;
	}
	return 0;
}
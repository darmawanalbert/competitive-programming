#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
const int maks = 3000;
int a[maks+5];
int main() {
	int n,m;
	bool toggle = true;
	scanf("%d %d",&n,&m);
	for (int i=0;i<m;i++) {
		scanf("%d",&a[i]);
		if (a[i]==1 || a[i]==n) toggle = false;
	}
	sort(a,a+m);
	for (int i=0;i<m-2;i++) {
		if (a[i+1]-a[i]==1 && a[i+2]-a[i+1]==1) {
			toggle = false;
			break;
		}
	}
	if (toggle) printf("YES\n");
	else printf("NO\n");
	return 0;
}
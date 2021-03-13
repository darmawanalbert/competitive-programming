#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string a,b;
	cin >> a;
	cin >> b;
	for (int i=0;i<a.size();i++) {
		if (a[i]>=65 && a[i]<=90) a[i]+=32;
	}
	for (int i=0;i<b.size();i++) {
		if (b[i]>=65 && b[i]<=90) b[i]+=32; 
	}
	if (a<b) printf("-1\n");
	else if (a>b) printf("1\n");
	else printf("0\n");
	return 0;
}
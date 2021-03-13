#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	string a,b,c;
	cin >> a;
	cin >> b;
	cin >> c;
	a = a+b;
	sort(a.begin(),a.end());
	sort(c.begin(),c.end());
	if (a==c) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string a;
	getline(cin,a);
	for (int i=a.size()-1;i>=0;i--) {
		if (a[i]>=65 && a[i]<=90) {
			if (a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='U' || a[i]=='O' || a[i]=='Y') printf("YES\n");
			else printf("NO\n");
			break;
		}
		else if (a[i]>=97 && a[i]<=122) {
			if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='u' || a[i]=='o' || a[i]=='y') printf("YES\n");
			else printf("NO\n");
			break;
		}
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	string a;
	cin >> a;
	bool dig = false;
	bool up = false;
	bool lo = false;
	for (int i=0;i<a.size();i++) {
		if (a[i]>=65 && a[i]<=90) up = true;
		else if (a[i]>=97 && a[i]<=122) lo = true;
		else if (a[i]>=48 && a[i]<=57) dig = true;
	}
	if (dig && up && lo && a.size()>=5) printf("Correct\n");
	else printf("Too weak\n");
	return 0;
}
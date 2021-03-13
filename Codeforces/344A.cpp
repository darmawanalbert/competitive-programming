#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int n;
	string a[100005];
	scanf("%d",&n);
	int acc = 1;
	for (int i=0;i<n;i++) cin >> a[i];
	for (int i=0;i<n-1;i++) {
		if (a[i][1]==a[i+1][0]) acc++;
	}
	printf("%d\n",acc);
	return 0;
}
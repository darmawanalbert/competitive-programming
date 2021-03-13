#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	string a,b;
	cin >> a;
	cin >> b;
	int acc = 0;
	for (int i=0;i<n;i++) {
		int tempA = a[i]-48;
		int tempB = b[i]-48;
		acc+=(min(abs(tempA-tempB),10-abs(tempA-tempB)));
	}
	printf("%d\n",acc);
	return 0;
}
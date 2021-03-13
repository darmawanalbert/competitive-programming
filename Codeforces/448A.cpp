#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int a1,a2,a3,b1,b2,b3;
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&b1,&b2,&b3);
	int a = a1+a2+a3;
	int b = b1+b2+b3;
	int n;
	scanf("%d",&n);
	while (a>0) {
		a-=5;
		n--;
	}
	while (b>0) {
		b-=10;
		n--;
	}
	if (n<0) printf("NO\n");
	else printf("YES\n");
	return 0;
}
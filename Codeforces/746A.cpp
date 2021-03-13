#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int a,b,c;
	int ans = 0;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	while (a>=1 && b>=2 && c>=4) {
		a--;
		b-=2;
		c-=4;
		ans+=7;
	}
	printf("%d\n",ans);
	return 0;
}
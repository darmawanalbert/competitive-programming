#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	if (a<b) {
		printf("%d ",a);
		b-=a;
		printf("%d\n",b/2);
	}
	else if (a>b) {
		printf("%d ",b);
		a-=b;
		printf("%d\n",a/2);
	}
	else {
		printf("%d %d\n",a,0);
	}
	return 0;
}
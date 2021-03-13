#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
int main(void) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (c<0) {
		if (b>a) printf("NO\n");
		else {
			if ((b-a)%c==0) printf("YES\n");
			else printf("NO\n");
		}
	}
	else if (c==0) {
		if (a==b) printf("YES\n");
		else printf("NO\n");
	}
	else {
		if (b<a) printf("NO\n");
		else {
			if ((b-a)%c==0) printf("YES\n");
			else printf("NO\n");
		}
	}
}
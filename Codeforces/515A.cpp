#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int a,b,s;
	scanf("%d %d %d",&a,&b,&s);
	int steps = abs(a)+abs(b);
	if (s < steps) printf("No\n");
	else if (s==steps) printf("Yes\n");
	else {
		s-=steps;
		if (s%2==0) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int acc = a;
	while (a>=b) {
		acc+=(a/b);
		a = (a/b)+(a%b);
	}
	printf("%d\n",acc);
	return 0;
}
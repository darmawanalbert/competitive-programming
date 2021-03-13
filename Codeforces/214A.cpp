#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int acc = 0;
	for (int a=0;a<=10000;a++) {
		for (int b=0;b<=10000;b++) {
			if ((a*a+b)==n && (a+(b*b))==m) acc++;
		}
	}
	printf("%d\n",acc);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int day = 1;
	while (true) {
		if (n-1>=0) n--;
		else break;
		if (day%m==0) n++;
		day++;
	}
	printf("%d\n",day-1);
	return 0;
}
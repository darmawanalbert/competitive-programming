#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int res = a+b+c;
	res = min(res,a+a+b+b);
	res = min(res,a+c+c+a);
	res = min(res,b+b+c+c);
	printf("%d\n",res);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int a,b,c,maks;
	maks = 0;
	scanf("%d %d %d",&a,&b,&c);
	int temp = a+b+c;
	if (temp>maks) maks = temp;
	temp = a*b*c;
	if (temp>maks) maks = temp;
	temp = a+(b*c);
	if (temp>maks) maks = temp;
	temp = (a+b)*c;
	if (temp>maks) maks = temp;
	temp = (a*b)+c;
	if (temp>maks) maks = temp;
	temp = a*(b+c);
	if (temp>maks) maks = temp;
	printf("%d\n",maks);
	return 0;
}
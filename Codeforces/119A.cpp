#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
int gcd(int a,int b) {return b==0?a:gcd(b,a%b);}
int main() {
	int a,b,n,d;
	scanf("%d %d %d",&a,&b,&n);
	int i = 1;
	while (true) {
		if (i%2==0) d = gcd(b,n);
		else d = gcd(a,n);
		if (n<d) {
			break;
		}
		n-=d;
		i++;
	}
	if (i%2==0) printf("0\n");
	else printf("1\n");
	return 0;
}
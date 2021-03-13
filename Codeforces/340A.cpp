#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int gcd(int a,int b) {return (b==0)?a:gcd(b,a%b);}
int lcm(int a,int b) {return a*(b/gcd(a,b));}

int main() {
	int x,y,a,b;
	scanf("%d %d %d %d",&x,&y,&a,&b);
	int div = lcm(x,y);
	int lo = -1;
	int hi = -1;
	for (int i=a;i<=b;i++) {
		if (i%div==0) {
			lo = i;
			break;
		}
	}
	for (int i=b;i>=a;i--) {
		if (i%div==0) {
			hi = i;
			break;
		}
	}
	if (lo==-1 || hi==-1) printf("0\n");
	else {
		hi/=div;
		lo/=div;
		printf("%d\n",hi-lo+1);
	}
	return 0;
}
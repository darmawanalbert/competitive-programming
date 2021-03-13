#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n;
	int temp;
	int five = 0;
	int zero = 0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		if (temp==5) five++;
		if (temp==0) zero++;
	}
	if (zero<=0) {
		printf("%d\n",-1);
	}
	else {
		if (five<9) printf("%d\n",0);
		else {
			five/=9;
			five*=9;
			for (int i=0;i<five;i++) {
				printf("%d",5);
			}
			for (int i=0;i<zero;i++) {
				printf("%d",0);
			}
			 printf("\n");
		}
	}
	
	return 0;
}
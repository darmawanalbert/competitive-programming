#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	for (int a=6;a<=200;a++) {
		int aaa = a*a*a;
		for (int b=2;b<=200;b++) {
			for (int c=b;c<=200;c++) {
				for (int d=c;d<=200;d++) {
					int sum = b*b*b+c*c*c+d*d*d;
					if (aaa==sum) printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
				}
			}
		}
	}
	return 0;
}
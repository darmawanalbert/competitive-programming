#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
#include <cstdio>

using namespace std;
int main(void) {
	string a;
	int low,up,white,sym,length;
	double lowr, upr,whiter,symr;
	while (getline(cin,a)) {
		length = a.length();
		low = 0;
		up = 0;
		white = 0;
		sym = 0;
		for (int i=0;i<length;i++) {
			if (a[i]>=65 && a[i]<=90) {
				up++;
			}
			else if (a[i]>=97 && a[i]<=122) {
				low++;
			}
			else if (a[i]==95) {
				white++;
			}
			else {
				sym++;
			}
		}
		lowr = (double) low/length;
		upr = (double) up/length;
		whiter = (double) white/length;
		symr = (double) sym/length;
		printf("%.15f \n",whiter);
		printf("%.15f \n",lowr);
		printf("%.15f \n",upr);
		printf("%.15f \n",symr);
	}
}
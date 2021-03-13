#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n,numSpecialRides,price,priceSpecial;
	scanf("%d %d %d %d",&n,&numSpecialRides,&price,&priceSpecial);
	int tot = 0;
	double doubleNumSpecial = (double) numSpecialRides;
	double doublePrice = (double) price;
	double doublePriceSpecial = (double) priceSpecial;
	if (doublePriceSpecial/doubleNumSpecial < doublePrice) {
		int dipakai = n/numSpecialRides;
		tot+= (priceSpecial * dipakai);
		n-= (dipakai*numSpecialRides);
		if (priceSpecial < n*price) tot+=(priceSpecial);
		else tot+=(n*price);
	}
	else {
		tot = n*price;
	}
	
	printf("%d\n",tot);
	return 0;
}
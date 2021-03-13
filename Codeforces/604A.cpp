#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;
const int maks = 5;
int a[maks+5];
int wa[maks+5];
int value[] = {500,1000,1500,2000,2500};
int main() {
	int yes,no;
	for (int i=0;i<5;i++) scanf("%d",&a[i]);
	for (int i=0;i<5;i++) scanf("%d",&wa[i]);
	scanf("%d %d",&yes,&no);
	int score = 100*yes-50*no;
	for (int i=0;i<5;i++) {
		int temp = value[i]-(value[i]*a[i]/250);
		temp-=(50*wa[i]);
		score+= max(3*(value[i]/10),temp);
	}
	printf("%d\n",score);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>


using namespace std;
const int maks = 100000;
int a[maks+5];
int b[maks+5];
int bn[maks+5];
int main() {
	int lena,lenb,newa,newb;
	scanf("%d %d",&lena,&lenb);
	scanf("%d %d",&newa,&newb);
	for (int i=0;i<lena;i++) scanf("%d",&a[i]);
	for (int i=0;i<lenb;i++) scanf("%d",&b[i]);
	for (int i=lenb-1,j=0;i>=lenb-newb;i--,j++) {
		bn[j] = b[i];
	}
	bool toggle;
	if (a[newa-1]<bn[newb-1]) toggle = true;
	else toggle = false;
	if (toggle) printf("YES\n");
	else printf("NO\n");
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int a[5];

int main() {
	int n;
	int acc;
	scanf("%d",&n);
	memset(a,0,sizeof(a));
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		a[temp]++;
	}
	acc = a[4] + a[3] + a[2]/2;
	if (a[1]>a[3]) a[1]-=a[3];
	else a[1] = 0;
	if (a[2]%2==1) {
		acc++;
		if (a[1]>2) a[1]-=a[2];
		else a[1] = 0;
	}
	
	printf("%d\n",acc);
	return 0;
}
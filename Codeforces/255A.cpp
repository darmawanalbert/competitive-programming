#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int a[25];
	int res[5];
	int n;
	scanf("%d",&n);
	memset(res,0,sizeof(res));
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n;i++) {
		res[i%3]+=a[i];
	}
	if (res[2]>res[1] && res[2]>res[0]) printf("back\n");
	else if (res[1]>res[2] && res[1]>res[0]) printf("biceps\n");
	else printf("chest\n");
	
}
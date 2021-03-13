#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int a[100005];
int main() {
	int n,c;
	scanf("%d %d",&n,&c);
	int acc = 1;
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n-1;i++) {
		if (a[i+1]-a[i]<=c) acc++;
		else acc = 1;
	}
	printf("%d\n",acc);
	return 0;
}
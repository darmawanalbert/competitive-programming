#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;
int main(void) {
	int a,sum,n;
	scanf("%d",&n);
	sum = 0;
	for (int i=0;i<n;i++) {
		scanf("%d",&a);
		if (a<0) sum++;
	}
	printf("%d\n",sum);
}
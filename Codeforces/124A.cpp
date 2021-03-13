#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n,a,b;
	scanf("%d %d %d",&n,&a,&b);
	int acc = 0;
	for (int i=1;i<=n;i++) {
		if ((i-1)>=a && (n-i)<=b) acc++;
	}
	printf("%d\n",acc);
	return 0;
}
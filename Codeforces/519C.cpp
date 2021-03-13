#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	if (a<b) swap(a,b);
	int tot = 0;
	while (a>=0 && b>=0) {
		a-=2;
		b-=1;
		tot++;
		if (a<b) swap(a,b);
	}
	tot--;
	printf("%d\n",tot);
	return 0;
}
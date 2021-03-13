#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	if (n%2==1) printf("%d\n",0);
	else {
		n/=2;
		if (n%2==1) printf("%d\n",n/2);
		else printf("%d\n",(n/2)-1);
	}
	return 0;
}
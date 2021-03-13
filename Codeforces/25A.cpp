#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n,temp;
	bool a[105];
	int odd = 0;
	int even = 0;
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d",&temp);
		if (temp%2==0) {
			even++;
			a[i]=false;
		}
		else {
			odd++;
			a[i] = true;
		}
	}
	if (odd>1) {
		for (int i=1;i<=n;i++) if (!a[i]) printf("%d\n",i);
	}
	else {
		for (int i=1;i<=n;i++) if (a[i]) printf("%d\n",i);
	}
	return 0;
}
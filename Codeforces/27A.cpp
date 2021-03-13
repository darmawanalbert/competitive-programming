#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int maks = 3000;
bool a[maks+5];
int main() {
	int temp;
	memset(a,false,sizeof(a));
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		a[temp] = true;
	}
	for (int i=1;i<=3001;i++) {
		if (!a[i]) {
			printf("%d\n",i);
			break;
		}
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;
const int maks = 1000000;
int label[maks+5];
int main() {
	int n,temp;
	scanf("%d",&n);
	int idx = 1;
	int sum = 0;
	for (int i=1;i<=n;i++) {
		scanf("%d",&temp);
		sum+=temp;
		for (int j=idx;j<=sum;j++) label[j] = i;
		idx = sum+1;
	}
	int m,q;
	scanf("%d",&m);
	while (m--) {
		scanf("%d",&q);
		printf("%d\n",label[q]);
	}
	return 0;
}
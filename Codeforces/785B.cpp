#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
const int INF = 1e9;
int main() {
	int n,m,kiri,kanan;
	scanf("%d",&n);
	int minN = INF;
	int minM = INF;
	int maxN = -INF;
	int maxM = -INF;
	while (n--) {
		scanf("%d %d",&kiri,&kanan);
		minN = min(minN,kanan);
		maxN = max(maxN,kiri);
	}
	scanf("%d",&m);
	while (m--) {
		scanf("%d %d",&kiri,&kanan);
		minM = min(minM,kanan);
		maxM = max(maxM,kiri);
	}
	if (maxM-minN<=0) {
		if (maxN-minM<=0) printf("0\n");
		else printf("%d\n",maxN-minM);
	}
	else {
		if (maxN-minM<=0) printf("%d\n",maxM-minN);
		else printf("%d\n",max(maxN-minM,maxM-minN));
	}
	return 0;
}
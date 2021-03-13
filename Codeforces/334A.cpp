#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int lo = 1;
	int hi = n*n;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n/2;j++) {
			if (j>0) printf(" ");
			printf("%d %d",lo,hi);
			lo++;
			hi--;
		}
		printf("\n");
	}
	return 0;
}
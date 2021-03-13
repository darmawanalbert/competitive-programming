#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n,m;
	bool kanan = true;
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++) {
		if (i%2==0) for (int j=0;j<m;j++) printf("#");
		else {
			if (kanan) {
				for (int j=0;j<m-1;j++) printf(".");
				printf("#");
			}
			else {
				printf("#");
				for (int j=1;j<m;j++) printf(".");
			}
			kanan = !kanan;
		}
		printf("\n");
	}
	return 0;
}
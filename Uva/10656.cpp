#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n;
	int temp;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		int idx = 0;
		for (int i=0;i<n;i++) {
			scanf("%d",&temp);
			if (temp!=0) {
				if (idx>0) printf(" ");
				printf("%d",temp);
				idx++;
			}
		}
		if (idx==0) cout << "0";
		printf("\n");
		
	}
	return 0;
}
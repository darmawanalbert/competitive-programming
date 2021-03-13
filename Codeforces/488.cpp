#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int t,a,f;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		scanf("%d",&a);
		scanf("%d",&f);
		if (ctr>1) printf("\n");
		for (int i=1;i<=f;i++) {
			if (i>1) printf("\n");
			for(int j=1;j<=a;j++) {
				for (int k=1;k<=j;k++) cout << j;
				cout << endl;
			}
			for (int j=a-1;j>=1;j--) {
				for (int k=1;k<=j;k++) cout << j;
				cout << endl;
			}
		}
	}
	
	return 0;
}


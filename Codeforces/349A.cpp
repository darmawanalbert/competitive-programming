#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int n;
	int temp;
	scanf("%d",&n);
	int acc25 = 0;
	int acc50 = 0;
	bool toggle = false;
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		if (temp==25) acc25++;
		else if (temp==50) {
			if (acc25>=1) {
				acc25--;
				acc50++;
			}
			else toggle = true;
		}
		else if (temp==100) {
			if (acc25>=1 && acc50>=1) {
				acc25--;
				acc50--;
			}
			else if (acc25>=3) {
				acc25-=3;
			}
			else toggle = true;
		}
	}
	if (toggle) printf("NO\n");
	else printf("YES\n");
	return 0;
}
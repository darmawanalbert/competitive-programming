#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n,m,ff,ss;
	scanf("%d %d",&n,&m);
	int acc = 0;
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			scanf("%d %d",&ff,&ss);
			if (ff+ss>0) acc++;
		}
	}
	printf("%d\n",acc);
	return 0;
}
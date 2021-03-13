#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;


char a[15][15];
int main() {
	string line;
	int r,c;
	scanf("%d %d",&r,&c);
	bool canEat;
	int acc = 0;
	int numRow = 0;
	for (int i=0;i<r;i++) {
		cin >> line;
		for (int j=0;j<c;j++) a[i][j] = line[j];
	}
	for (int i=0;i<r;i++) {
		canEat = true;
		for (int j=0;j<c;j++) if (a[i][j]=='S') canEat = false;
		if (canEat) {
			numRow++;
			acc+=c;
		}
	}	
	for (int i=0;i<c;i++) {
		canEat = true;
		for (int j=0;j<r;j++) if(a[j][i]=='S') canEat = false;
		if (canEat) {
			acc+=(r-numRow);
		}
	}
	printf("%d\n",acc);
	
	return 0;
}
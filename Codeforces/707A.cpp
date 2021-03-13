#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int r,c;
	bool isBlack = true;
	string temp;
	scanf("%d %d",&r,&c);
	for (int i=0;i<r;i++) {
		for (int j=0;j<c;j++) {
			cin >> temp;
			if (temp=="C" || temp=="M" || temp=="Y") isBlack = false;
		}
	}
	if (isBlack) printf("#Black&White\n");
	else printf("#Color\n");
	
}
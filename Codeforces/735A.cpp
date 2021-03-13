#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n,k;
	scanf("%d %d",&n,&k);
	string line;
	cin >> line;
	int posG,posT;
	for (int i=0;i<n;i++) {
		if (line[i]=='G') posG = i;
		if (line[i]=='T') posT = i;
	}
	if (abs(posG-posT)%k==0) {
		bool isJump = true;
		if (posG<posT) {
			while (posG!=posT) {
				if (line[posG+k]=='#') isJump = false;
				posG+=k;
			}
		}
		else if (posG>posT) {
			while (posG!=posT) {
				if(line[posG-k]=='#') isJump = false;
				posG-=k;
			}
		}
		if (isJump) printf("YES\n");
		else printf("NO\n");
	}
	else printf("NO\n");
	return 0;
}
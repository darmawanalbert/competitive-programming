#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	int n,m,c;
	int sumM = 0;
	int sumC = 0;
	scanf("%d",&n);
	while (n--) {
		scanf("%d %d",&m,&c);
		if (m>c) sumM++;
		else if (m<c) sumC++;
	}
	if (sumM>sumC) printf("Mishka\n");
	else if (sumM<sumC) printf("Chris\n");
	else printf("Friendship is magic!^^");
	return 0;
}
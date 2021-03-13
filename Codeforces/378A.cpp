#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;

int main() {
	int a,b;
	scanf("%d %d",&a,&b);
	int winA = 0;
	int winB = 0;
	int draw = 0;
	for (int i=1;i<=6;i++) {
		int deltaA = abs(a-i);
		int deltaB = abs(b-i);
		if (deltaA<deltaB) winA++;
		else if (deltaA>deltaB) winB++;
		else draw++;
	}
	printf("%d %d %d\n",winA,draw,winB);
	return 0;
}
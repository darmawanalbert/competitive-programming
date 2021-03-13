#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	printf("I ");
	for (int i=0;i<n;i++) {
		if (i>0) printf("that I ");
		if (i%2==0) printf("hate ");
		else printf("love ");
	}
	printf("it\n");
	return 0;
}
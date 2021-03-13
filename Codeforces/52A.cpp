#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	int temp;
	scanf("%d",&n);
	int sumOne = 0;
	int sumTwo = 0;
	int sumThree = 0;
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		if (temp==1) sumOne++;
		if (temp==2) sumTwo++;
		if (temp==3) sumThree++;
	}
	int res = max(sumOne,max(sumTwo,sumThree));
	printf("%d\n",n-res);
	return 0;
}
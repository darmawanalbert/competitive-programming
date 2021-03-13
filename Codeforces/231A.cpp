#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	scanf("%d",&n);
	int a,b,c;
	int acc = 0;
	for (int i=0;i<n;i++) {
		scanf("%d %d %d",&a,&b,&c);
		if (a+b+c>=2) acc++;
	}
	printf("%d\n",acc);
	return 0;
}
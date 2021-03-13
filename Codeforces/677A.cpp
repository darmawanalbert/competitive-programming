#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n,h,temp;
	scanf("%d %d",&n,&h);
	int acc = 0;
	while (n--) {
		scanf("%d",&temp);
		if (temp>h) acc+=2;
		else acc++;
	}
	printf("%d\n",acc);
	return 0;
}
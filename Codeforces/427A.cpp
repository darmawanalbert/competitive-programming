#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n,temp;
	int tot = 0;
	int current = 0;
	scanf("%d",&n);
	while (n--) {
		scanf("%d",&temp);
		current+=temp;
		if (current<0) {
			tot++;
			current = 0;
		}
	}
	printf("%d\n",tot);
	return 0;
}
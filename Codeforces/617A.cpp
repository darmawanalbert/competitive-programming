#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int x;
	scanf("%d",&x);
	printf("%d\n",(x/5)+((x%5==0)?0:1));
	return 0;
}
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <cstdio>

using namespace std;

int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	m*=n;
	m/=2;
	printf("%d\n",m);	
}
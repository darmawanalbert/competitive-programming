#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	printf("%d\n",m+n-1);
	for (int i=1;i<=m;i++) printf("%d %d\n",1,i);
	for (int i=2;i<=n;i++) printf("%d %d\n",i,m);
	return 0;
}
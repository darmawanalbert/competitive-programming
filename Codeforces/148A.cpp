#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;
bool isDamaged[100005];

int main() {
	int k,l,m,n,d;
	scanf("%d",&k);
	scanf("%d",&l);
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);
	int acc = 0;
	memset(isDamaged,false,sizeof(isDamaged));
	for (int i=k;i<=d;i+=k) isDamaged[i] = true;
	for (int i=l;i<=d;i+=l) isDamaged[i] = true;
	for (int i=m;i<=d;i+=m) isDamaged[i] = true;
	for (int i=n;i<=d;i+=n) isDamaged[i] = true;
	for (int i=1;i<=d;i++) {
		if (isDamaged[i]) acc++;
	}
	printf("%d\n",acc);
}
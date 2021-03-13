#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#define pb push_back


using namespace std;
typedef long long ll;

const int maks = 100;
int a[maks+5];
int main() {
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	for (int i=1;i<=maks;i++) {
		scanf("%d",&a[i]);
	}
	int mini = 1000;
	for (int i=1;i<=maks;i++) {
		if (a[i]<=k && i!=m && a[i]!=0) mini = min(mini,abs(i-m)*10);
	}
	printf("%d\n",mini);
	return 0;
}
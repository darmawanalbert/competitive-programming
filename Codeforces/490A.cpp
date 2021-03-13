#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <utility>
#define pb push_back
using namespace std;

vector<int> a;
vector<int> b;
vector<int> c;

int main() {
	int n;
	int temp;
	a.clear();
	b.clear();
	c.clear();
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d",&temp);
		if (temp==1) a.pb(i);
		if (temp==2) b.pb(i);
		if (temp==3) c.pb(i);
	}
	int minimum = min((int)a.size(),min((int)b.size(),(int)c.size()));
	printf("%d\n",minimum);
	for (int i=0;i<minimum;i++) {
		printf("%d %d %d\n",a[i],b[i],c[i]);
	}
	
	return 0;
}
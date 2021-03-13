#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#define ff first
#define ss second
#define mp make_pair

using namespace std;
pair<int,int> a[100005];
int main() {
	bool isHappy = false;
	int n;
	int temp1,temp2;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d %d",&temp1,&temp2);
		a[i] = mp(temp1,temp2);
	}
	sort(a,a+n);
	for (int i=0;i<n-1;i++) {
		if (a[i].ss > a[i+1].ss) isHappy = true;
	}
	if (isHappy) printf("Happy Alex\n");
	else printf("Poor Alex\n");
	return 0;
}
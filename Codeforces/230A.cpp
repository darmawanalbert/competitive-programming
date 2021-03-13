#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
using namespace std;
const int maks = 1000;
pair<int,int> a[maks+5];
int main() {
	int x,y;
	int s,n;
	scanf("%d %d",&s,&n);
	for (int i=0;i<n;i++) {
		scanf("%d %d",&x,&y);
		a[i] = mp(x,y);
	}
	sort(a,a+n);
	bool toggle = true;
	for (int i=0;i<n;i++) {
		if (s>a[i].ff) s+=a[i].ss;
		else {
			toggle =false;
			break;
		}
	}
	if (toggle) printf("YES\n");
	else printf("NO\n");
	return 0;
}
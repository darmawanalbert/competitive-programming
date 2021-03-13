#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
typedef pair<int,int> ii;
vector<ii> vec;

bool cmp(ii x,ii y) {
	if (x.ff+x.ss==y.ff+y.ss) return x.ss < y.ss;
	return x.ff+x.ss < y.ff+y.ss;
}

int main() {
	int n;
	scanf("%d",&n);
	vec.clear();
	for (int a=0;a<=n;a++) {
		int b = (n-4*a)/7;
		if ((n-4*a)%7==0 && b>=0) {
			vec.pb(mp(a,b));
		}
	}
	if (vec.size()>0) {
		sort(vec.begin(),vec.end(),cmp);
		for (int i=0;i<vec[0].ff;i++) cout << 4;
		for (int i=0;i<vec[0].ss;i++) cout << 7;
		cout << endl;
	}
	else {
		cout << -1 << endl;
	}
	return 0;
}
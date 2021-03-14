#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
using namespace std;
typedef long long ll;

typedef pair<string,pair <int, pair <int,int> > > psiii;
psiii a[105];

bool msort(psiii a,psiii b) {
	if (a.ss.ss.ss==b.ss.ss.ss) {
		if (a.ss.ss.ff == b.ss.ss.ff) {
			return a.ss.ff < b.ss.ff;
		}
		else return a.ss.ss.ff < b.ss.ss.ff;
	}
	else return a.ss.ss.ss < b.ss.ss.ss;
}

int main() {
	int n,dd,mm,yyyy;
	string temp;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		cin >> temp >> dd >> mm >> yyyy;
		a[i] = mp(temp,mp(dd,mp(mm,yyyy)));
	}
	sort(a,a+n,msort);
	cout << a[n-1].ff << endl;
	cout << a[0].ff << endl;
	return 0;
}
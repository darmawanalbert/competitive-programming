#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std;
vector< pair<int,string> > vi;

bool comp(pair<int,string> a, pair<int,string> b) {
	return a.ff > b.ff;
}

int main() {
	int n;
	int a,b,c,d,e,minus,plus;
	string line;
	scanf("%d",&n);
	vi.clear();
	for (int i=0;i<n;i++) {
		cin >> line >> plus >> minus >> a >> b >> c >> d >> e;
		vi.pb(mp((a+b+c+d+e+100*plus-50*minus),line));
	}
	sort(vi.begin(),vi.end(),comp);
	cout << vi[0].ss << endl;
	return 0;
}
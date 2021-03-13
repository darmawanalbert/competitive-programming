#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <utility>
#define mp make_pair
#define ff first
#define ss second

using namespace std;
const int maks = 100;
pair<string, pair<int,int> > a[maks+5];
map<string,int> mmap;

bool comp(pair<string, pair<int,int> > a,pair<string,pair<int,int> > b) {
	if (a.ss.ff == b.ss.ff) return a.ss.ss < b.ss.ss;
	return a.ss.ff > b.ss.ff;
}

int main() {
	int n;
	string line1,line2;
	mmap["captain"] = 1;
	mmap["man"] = 2;
	mmap["woman"] = 3;
	mmap["child"] = 3;
	mmap["rat"] = 4;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		cin >> line1 >> line2;
		a[i] = mp(line1,mp(mmap[line2],i));
	}
	sort(a,a+n,comp);
	for (int i=0;i<n;i++) {
		cout << a[i].ff << endl;
	}
	
	return 0;
}
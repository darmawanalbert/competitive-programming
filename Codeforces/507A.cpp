#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <set>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

using namespace std;
set<int> sset;
const int maks = 100;
pair<int,int> a[maks+5];
int main() {
	int temp;
	sset.clear();
	int n,k;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		a[i] = mp(temp,i+1);
	}
	sort(a,a+n);
	int idx = 0;
	while (k>0 && idx<n) {
		pair<int,int> current = a[idx];
		if (k-current.ff>=0) {
			k-=current.ff;
			sset.insert(current.ss);
			idx++;
		}
		else break;
	}
	cout << sset.size() << endl;
	int ctr = 0;
	for (set<int>::iterator it=sset.begin();it!=sset.end();++it) {
		if (ctr>0) printf(" ");
		cout << *it;
		ctr++;
	}
	printf("\n");
	return 0;
}
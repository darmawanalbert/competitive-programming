#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
const int maks = 20000;
int dragon[maks+5];
int knight[maks+5];
int main() {
	int n,m;
	while (scanf("%d %d",&n,&m)!=EOF) {
		if (n==0 && m==0) break;
		for (int i=0;i<n;i++) scanf("%d",&dragon[i]);
		for (int i=0;i<m;i++) scanf("%d",&knight[i]);
		int tot = 0;
		sort(dragon,dragon+n);
		sort(knight,knight+m);
		int pos = 0;
		for (int i=0;i<m;i++) {
			if (knight[i]>=dragon[pos] && pos<n) {
				pos++;
				tot+=knight[i];
			}
		}
		if (pos==n) cout << tot << endl;
		else cout << "Loowater is doomed!" << endl;
	}
	return 0;
}
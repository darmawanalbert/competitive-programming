#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>
using namespace std;
typedef long long ll;
map<char,long long> mmap;
int main() {
	int t,n;
	char line[10005];
	char temp;
	ll cent;
	int numLine;
	ll sum;
	scanf("%d",&t);
	while (t--) {
		sum = 0;
		mmap.clear();
		scanf("%d",&n);
		for (int i=0;i<n;i++) {
			cin >> temp >> cent;
			mmap[temp] = cent;
		}
		scanf("%d",&numLine);
		getchar();
		while (numLine--) {
			scanf ("%[^\n]%*c", line);
			int len = strlen(line);
			for (int i=0;i<len;i++) {
				temp = line[i];
				if (mmap.find(temp)!=mmap.end()) sum+=mmap[temp];
			}
		}
		ll mod100 = sum%100;
		if (mod100>9) printf("%lld.%lld$\n",sum/100,mod100);
		else printf("%lld.0%lld$\n",sum/100,mod100);
	}
	return 0;
}
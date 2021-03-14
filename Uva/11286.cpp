#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>

using namespace std;

map<string,int> mmap;

int main() {
	int t;
	string a[10];
	string temp;
	while (scanf("%d",&t)!=EOF) {
		if (t==0) break;
		mmap.clear();
		int maks = 0;
		for (int i=0;i<t;i++) {
			cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
			sort(a,a+5);
			temp = "";
			for (int i=0;i<5;i++) temp+=a[i];
			if (mmap.find(temp)==mmap.end()) {
				mmap[temp] = 1;
			}
			else {
				mmap[temp]++;
			}
			if (mmap[temp]>maks) maks = mmap[temp];
		}
		int sum = 0;
		for (map<string,int>::iterator it=mmap.begin();it!=mmap.end();++it) {
			if (it->second==maks) sum+=maks;
		}
		printf("%d\n",sum);
		
	}
	return 0;
}
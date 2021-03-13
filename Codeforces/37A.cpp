#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>

using namespace std;
map<int,int> mmap;
int main() {
	mmap.clear();
	int n;
	int temp;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		mmap[temp]++;
	}
	int maks = 1;
	for (map<int,int>::iterator it=mmap.begin();it!=mmap.end();++it) {
		if (it->second>maks) maks = it->second;
	}
	cout << maks << " " << mmap.size() << endl;
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
using namespace std;

int a[1005];
map<int,int> mmap;
int main() {
	int n;
	mmap.clear();
	int maks = 0;
	int idx = 0;
	scanf("%d",&n);
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n;i++) {
		mmap[a[i]]++;
		if (mmap[a[i]]>maks) {
			idx = a[i];
			maks = mmap[a[i]];
		}
	}
	printf("%d\n",idx);
	return 0;
}
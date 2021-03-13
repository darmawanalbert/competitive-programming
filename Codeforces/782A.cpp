#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#define pb push_back
using namespace std;

int a[200005];
map<int,int> mmap;
int main() {
	int n;
	map<int,int>::iterator it;
	scanf("%d",&n);
	for (int i=0;i<(2*n);i++) scanf("%d",&a[i]);
	int maks = 0;
	mmap.clear();
	for (int i=0;i<(2*n);i++) {
		if (mmap.find(a[i])==mmap.end()) {
			mmap[a[i]] = 1;
			if (mmap.size()>maks) maks = mmap.size();
		}
		else {
			it = mmap.find(a[i]);
			mmap.erase(it);
		}
	}
	printf("%d\n",maks);
	return 0;
}
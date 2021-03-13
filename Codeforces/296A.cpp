#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
const int maks = 100;
map<int,int> mmap;
int main() {
	int n;
	int temp;
	mmap.clear();
	scanf("%d",&n);
	int bound;
	if (n%2==0) {
		bound = (n/2)+1;
	}
	else {
		bound = (n/2)+2;
	}
	bool toggle = true;
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		mmap[temp]++;
		if (mmap[temp]>=bound) toggle = false;
	}
	if (toggle) printf("YES\n");
	else printf("NO\n");
	return 0;
}
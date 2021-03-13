#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <map>
using namespace std;
const int maks = 1000;
map<int,int> mmap;
int main() {
	mmap.clear();
	bool toggle = false;
	int temp,n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		if (temp!=0) {
			mmap[temp]++;
			if (mmap[temp]>2) toggle = true;
		}
	}
	if (toggle) printf("-1\n");
	else {
		int acc = 0;
		for (map<int,int>::iterator it=mmap.begin();it!=mmap.end();++it) {
			if (it->second==2) acc++;
		}
		printf("%d\n",acc);
	}
	
	return 0;
}
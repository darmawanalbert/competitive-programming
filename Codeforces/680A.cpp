#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define pb push_back
using namespace std;
map<int,int> mmap;

int main() {
	mmap.clear();
	int val;
	int sum = 0;
	for (int i=0;i<5;i++) {
		scanf("%d",&val);
		sum+=val;
		mmap[val]++;
	}
	int mini = sum;
	for (map<int,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
		if (it->second>=2) {
			mini = min(mini,sum-(it->first)*2);
		}
		if (it->second>=3) {
			mini = min(mini,sum-(it->first)*3);
		}
	}
	printf("%d\n",mini);
	return 0;
}
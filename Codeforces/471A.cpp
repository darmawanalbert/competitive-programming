#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
using namespace std;
const int INF = 1e9;
map<int,int> mmap;
int main() {
	int temp;
	mmap.clear();
	for (int i=0;i<6;i++) {
		scanf("%d",&temp);
		if (mmap.find(temp)==mmap.end()) mmap[temp] = 1;
		else {
			if (mmap[temp]>=4) {
				if (mmap.find(INF)==mmap.end()) mmap[INF] = 1;
				else mmap[INF]++;
			}
			else mmap[temp]++;
		}
	}
	if (mmap.size()==3) {
		bool isBear = false;
		for (map<int,int>::iterator it=mmap.begin();it!=mmap.end();++it) {
			if (it->second==4) {
				isBear = true;
			}
		}
		if (isBear) printf("Bear\n");
		else printf("Alien\n");
	}
	else if (mmap.size()==2) {
		bool isEle = false;
		for (map<int,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
			if (it->second==4) isEle = true;
		}
		if (isEle) printf("Elephant\n");
		else printf("Alien\n");
	}
	else printf("Alien\n");
	return 0;
}
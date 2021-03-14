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
	string line;
	int num;
	int day;
	int n;
	scanf("%d",&t);
	for (int ctr = 1;ctr<=t;ctr++) {
		mmap.clear();
		scanf("%d",&n);
		while (n--) {
			cin >> line >> num;
			mmap[line] = num;
		}
		scanf("%d",&day);
		cin >> line;
		if (mmap.find(line)==mmap.end()) printf("Case %d: Do your own homework!\n",ctr);
		else {
			if (mmap[line]<=day) printf("Case %d: Yesss\n",ctr);
			else if (mmap[line]>day && mmap[line]<=(day+5)) printf("Case %d: Late\n",ctr);
			else printf("Case %d: Do your own homework!\n",ctr);
		}
	}
	return 0;
}
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <map>

using namespace std;
map<string,int> mmap;

int main() {
	int t;
	string line;
	double res;
	char name[35];
	scanf("%d\n\n",&t);
	int loop = 0;
	while (t--) {
		if (loop>0) printf("\n");
		mmap.clear();
		int ctr = 0;
		while (getline(cin,line)) {
			if (line=="") break;
			if (mmap.find(line)==mmap.end()) {
				mmap[line] = 1;
			}
			else {
				mmap[line]++;
			}
			ctr++;
		}
		for (map<string,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
			res = (double) it->second / (double) ctr;
			res*=100.0;
			printf("%s %.4lf\n",it->first.data(),res);
		}
		loop++;
	}
	return 0;
}
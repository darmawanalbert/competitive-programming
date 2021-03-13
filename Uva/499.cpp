#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
using namespace std;
map<char,int> mmap;
int main() {
	string line;
	while (getline(cin,line)) {
		int maks = 0;
		mmap.clear();
		for (int i=0;i<line.size();i++) {
			char cur = line[i];
			if ((cur>='a' && cur<='z') || (cur>='A' && cur<='Z')) {
				mmap[cur]++;
				if (mmap[cur]>maks) maks = mmap[cur];
			}
		}
		for (map<char,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
			if (it->second==maks) {
				cout << it->first;
			}
		}
		cout << " " << maks << endl;
	}
	return 0;
}
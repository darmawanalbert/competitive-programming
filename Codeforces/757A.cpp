#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
using namespace std;
map<char,int> mmap;
int main() {
	mmap.clear();
	string line;
	cin >> line;
	for (int i=0;i<line.size();i++) {
		mmap[line[i]]++;
	}
	int ans = 0;
	while (mmap['B']>=1 && mmap['u']>=2 && mmap['l']>=1 && mmap['b']>=1 && mmap['a']>=2 && mmap['s']>=1 && mmap['r']>=1) {
		mmap['B']--;
		mmap['u']-=2;
		mmap['l']--;
		mmap['b']--;
		mmap['a']-=2;
		mmap['s']--;
		mmap['r']--;
		ans++;
	}
	printf("%d\n",ans);
	return 0;
}
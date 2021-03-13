#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <map>

using namespace std;

map<string,int> mmap;

int main() {
	int n;
	scanf("%d",&n);
	string line;
	while (n--) {
		cin >> line;
		mmap[line]++;
	}
	int maks = 0;
	string winner;
	for (map<string,int>::iterator it=mmap.begin();it!=mmap.end();++it) 	{
		if (it->second > maks) {
			maks = it->second;
			winner = it->first;
		}
	}
	cout << winner << endl;
	return 0;
}
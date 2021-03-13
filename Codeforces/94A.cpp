#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
using namespace std;
map<string,int> mmap;
int main() {
	mmap.clear();
	string ori;
	string code;
	cin >> ori;
	for (int i=0;i<10;i++) {
		cin >> code;
		mmap[code] = i;
	}
	for (int i=0;i<8;i++) {
		string sub = ori.substr(10*i,10);
		cout << mmap[sub];
	}
	cout << endl;
	return 0;
	
}
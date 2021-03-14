#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>
#include <sstream>
using namespace std;

map<string,string> mmap;

int main() {
	string line,a,b,in;
	mmap.clear();
	while (getline(cin,line), line!="") {
		stringstream iss(line);
		iss >> a >> b;
		mmap[b] = a;
	}
	while (getline(cin,line)) {
		if (mmap.find(line)==mmap.end()) cout << "eh" << endl;
		else cout << mmap[line] << endl;
	}
	return 0;
}
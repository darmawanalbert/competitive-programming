#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

map<string,string> mmap;

int main() {
	string ff,ss;
	int n,q;
	mmap.clear();
	scanf("%d",&n);
	getchar();
	for (int i=0;i<n;i++) {
		getline(cin,ff);
		getline(cin,ss);
		mmap[ff] = ss;
	}
	scanf("%d",&q);
	getchar();
	for (int i=0;i<q;i++) {
		getline(cin,ff);
		cout << mmap[ff] << endl;
	}
	
}
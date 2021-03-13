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
	int n;
	string line;
	while (scanf("%d",&n)!=EOF) {
		int count = 0;
		string temp = "";
		cin >> line;
		mmap.clear();
		for (int i=0;i<=line.size()-n;i++) {
			string token = line.substr(i,n);
			mmap[token]++;
			if (mmap[token]>count) {
				count = mmap[token];
				temp = token;
			}
		}
		cout << temp << endl;
		
	}
	return 0;
}
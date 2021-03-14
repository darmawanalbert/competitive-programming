#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <sstream>
using namespace std;

map<string,double> mmap;

int main() {
	int m,n;
	scanf("%d %d",&m,&n);
	string temp,line;
	double tmp;
	mmap.clear();
	for (int i=0;i<m;i++) {
		cin >> temp >> tmp;
		mmap[temp] = tmp;
	}
	getchar();
	for (int i=0;i<n;i++) {
		double sum = 0;
		while (getline(cin,line)) {
			if (line==".") break;
			istringstream iss(line);
			while (iss >> temp) {
				if (mmap.find(temp)!=mmap.end()) sum+=mmap[temp];
			}
		}
		cout << sum << endl;
	}

	return 0;
}
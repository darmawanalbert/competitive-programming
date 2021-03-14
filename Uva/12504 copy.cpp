#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <map>

using namespace std;

map<string,string> oldmap;
map<string,string> newmap;

int main() {
	int t;
	string line,key,val;
	bool isKey;
	bool isChange;
	scanf("%d",&t);
	while (t--) {
		oldmap.clear();
		newmap.clear();
		cin >> line;
		key = "";
		val = "";
		isKey = true;
		for (int i=1;i<line.size();i++) {
			if (isKey) {
				if (line[i]==':') isKey = false;
				else key+=line[i];
			}
			else {
				if (line[i]==',' || line[i]=='}') {
					isKey = true;
					oldmap[key] = val;
					key = "";
					val = "";
				}
				else val+=line[i];
			}
		}
		cin >> line;
		key = "";
		val = "";
		isKey = true;
		for (int i=1;i<line.size();i++) {
			if (isKey) {
				if (line[i]==':') isKey = false;
				else key+=line[i];
			}
			else {
				if (line[i]==',' || line[i]=='}') {
					isKey = true;
					newmap[key] = val;
					key = "";
					val = "";
				}
				else val+=line[i];
			}
		}
		isChange = false;
		int ctr = 0;
		for (map<string,string>::iterator it = newmap.begin();it!=newmap.end();++it) {
			if (oldmap.find(it->first)==oldmap.end()) {
				if (ctr==0) {
					printf("+");
					isChange = true;
				}
				else printf(",");
				ctr++;
				cout << it->first;
			}
		}
		if (ctr>0) printf("\n");
		ctr = 0;
		for (map<string,string>::iterator it = oldmap.begin();it!=oldmap.end();++it) {
			if (newmap.find(it->first)==newmap.end()) {
				if (ctr==0) {
					printf("-");
					isChange = true;
				}
				else printf(",");
				ctr++;
				cout << it->first;
			}
		}
		if (ctr>0) printf("\n");
		ctr = 0;
		for (map<string,string>::iterator it = newmap.begin();it!=newmap.end();++it) {
			if (oldmap.find(it->first)!=oldmap.end()) {
				if (oldmap[it->first]!=(it->second)) {
					if (ctr==0) {
						printf("*");
						isChange = true;
					}
					else printf(",");
					ctr++;
					cout << it->first;
				}
			}
		}
		if (ctr>0) printf("\n");
		if (isChange==false) printf("No changes\n");
		printf("\n");
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
#include <set>

using namespace std;

map<string,string> oldmap;
map<string,string> newmap;

int main() {
	int t;
	string lama,baru;
	scanf("%d",&t);
	getchar();
	for (int ctr=0;ctr<t;ctr++) {
		if (ctr>0) printf("\n");
		getline(cin,lama);
		string word = "";
		string val = "";
		bool isWord = true;
		oldmap.clear();
		newmap.clear();
		for (int i=1;i<lama.size();i++) {
			if (isWord) {
				if (lama[i]==':') {
					isWord = false;
				}
				else word+=lama[i];
			}
			else {
				if (lama[i]==',' || lama[i]=='}') {
					oldmap[word] = val;
					isWord = true;
					word = "";
					val = "";
				}
				else val+=lama[i];
			}
		}
		getline(cin,baru);
		for (int i=1;i<baru.size();i++) {
			if (isWord) {
				if (baru[i]==':') {
					isWord = false;
				}
				else word+=baru[i];
			}
			else {
				if (baru[i]==',' || baru[i]=='}') {
					newmap[word] = val;
					isWord = true;
					word = "";
					val = "";
				}
				else val+=baru[i];
			}
		}
		
		
	}
	
}
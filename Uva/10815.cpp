#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <set>
#include <sstream>
using namespace std;
set<string> dictionary;

int main() {
	string line,temp,input;
	while (getline(cin,line)) {
		istringstream iss(line);
		while (iss >> input) {
			temp = "";
			for (int i=0;i<input.size();i++) {
				if (input[i]>=97 && input[i]<=122) temp+=input[i];
				else if (input[i]>=65 && input[i]<=90) temp+=(input[i]+32);
				else {
					if (temp!="") {
						dictionary.insert(temp);
						temp = "";
					}
				}
			}
			dictionary.insert(temp);
		}
	}
	for (set<string>::iterator it = dictionary.begin();it!=dictionary.end();++it) {
		if (*it!="") cout << *it << endl;
	}
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <set>
#include <sstream>
#include <algorithm>

using namespace std;

set<string> dictionary;

int main() {
	string line,temp,input;
	dictionary.clear();
	temp = "";
	while (getline(cin,line)) {
		istringstream iss(line);
		while (iss >> input) {
			for (int i=0;i<input.size();i++) {
				if (input[i]>=97 && input[i]<=122) temp+=input[i];
				else if (input[i]>=65 && input[i]<=90) temp+=(input[i]+32);
				else if (input[i]=='-' && (i!=input.size()-1)) temp+='-';
				else {
					if (i!=input.size()-1) {
						dictionary.insert(temp);
						temp = "";
					}
				}
				if (i==input.size()-1) {
					if (input[i]!='-') {
						dictionary.insert(temp);
						temp = "";
					}
				}
			}
		}
	}
	for (set<string>::iterator it = dictionary.begin();it!=dictionary.end();++it) {
		if (*it!="") cout << *it << endl;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <set>
#define pb push_back
using namespace std;
set<string> sset;
bool cmp(char a,char b) {
	return a>b;
}

int toNum(string a) {
	int res = 0;
	int mul = 1;
	for (int i=a.size()-1;i>=0;i--) {
		int dig = a[i]-48;
		res+=(dig*mul);
		mul*=10;
	}
	return res;
}

string toStr(int x) {
	stack<char> st;
	while (x>0) {
		int dig = x%10;
		char p = dig + '0';
		st.push(p);
		x/=10;
	}
	string ress = "";
	while (!st.empty()) {
		ress+=st.top();
		st.pop();
	}
	return ress;
}

int main() {
	string line;
	while (cin >> line) {
		if (line=="0") break;
		sset.clear();
		sset.insert(line);
		cout << "Original number was " << line << endl;
		int ctr = 1;
		while (true) {
			string temp = line;
			sort(temp.begin(),temp.end(),cmp);
			string temp2 = line;
			sort(temp2.begin(),temp2.end());
			int hi = toNum(temp);
			int lo = toNum(temp2);
			cout << hi << " - " << lo << " = " << hi-lo << endl;
			line = toStr(hi-lo);
			if (sset.find(line)==sset.end()) sset.insert(line);
			else {
				cout << "Chain length " << ctr << endl << endl;
				break;
			}
			ctr++;
		}
	}
	return 0;
}
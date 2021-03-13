#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <stack>
#include <map>
using namespace std;

map<int,int> mmap;
stack<char> st;

int main() {
	string line;
	cin >> line;
	int cur = 0;
	while (!st.empty()) st.pop();
	mmap.clear();
	for (int i=0;i<line.size();i++) {
		if (line[i]=='(') st.push('(');
		else if (line[i]==')') {
			if (!st.empty()) {
				if (st.top()=='(') {
					cur+=2;
					st.pop();
				}
				else {
					mmap[cur]++;
					cur = 0;
				}
			}
			else {
				cur = 0;
				st.push(')');
			}
		}
	}
	if (cur!=0) {
		mmap[cur]++;
	}
	int last;
	int sum;
	for (map<int,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
		last = it->first;
		sum = it->second;
		cout << last << " " << sum << endl;
	}
	if (last==0) cout << "0 1" << endl;
	else cout << last << " " << sum << endl;
	return 0;	
}
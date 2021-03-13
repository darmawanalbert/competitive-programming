#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <stack>
using namespace std;
stack<char> st;
int main() {
	int n;
	scanf("%d",&n);
	getchar();
	string line;
	while (n--) {
		getline(cin,line);
		while (!st.empty()) st.pop();
		for (int i=0;i<line.size();i++) {
			if (line[i]==')') {
				if (!st.empty()) {
					if (st.top()=='(') st.pop();
					else st.push(')');
				}
				else st.push(')');
				
			}
			else if (line[i]==']') {
				if (!st.empty()) {
					if (st.top()=='[') st.pop();
					else st.push(']');
				}
				else st.push(']');
			}
			else if (line[i]=='(' || line[i]=='[') st.push(line[i]);
		}
		if (st.empty()) cout << "Yes" << endl;
		else {
		
			cout << "No" << endl;
		}
	}
	return 0;
}
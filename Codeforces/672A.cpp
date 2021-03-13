#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <vector>
#define pb push_back
using namespace std;
string prefix;

void precompute() {
	prefix = "";
	for (int i=1;i<=500;i++) {
		stack<char> st;
		int temp = i;
		while (temp>0) {
			int digit = temp%10;
			char appended = digit+48;
			st.push(appended);
			temp/=10;
		}
		while (!st.empty()) {
			prefix+=st.top();
			st.pop();
		}
	}
}

int main() {
	precompute();
	int n;
	scanf("%d",&n);
	cout << prefix[n-1] << endl;
	return 0;
}
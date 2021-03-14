#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <stack>
using namespace std;
stack<int> a;
stack<int> b;
stack<int> c;
int main() {
	int t;
	int n;
	int kiri,kanan;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		while (!a.empty()) a.pop();
		while (!b.empty()) b.pop();
		while (!c.empty()) c.pop();
		scanf("%d",&n);
		for (int i=0;i<n;i++) {
			scanf("%d %d",&kiri,&kanan);
			a.push(kiri);
			b.push(kanan);
		}
		int res = 0;
		while (!a.empty()) {
			int tmp1 = a.top();
			a.pop();
			int tmp2 = b.top();
			b.pop();
			tmp1 = tmp1+tmp2+res;
			c.push(tmp1%10);
			res = tmp1/10;
		}
		if (ctr>1) cout << endl;
		while (!c.empty()) {
			cout << c.top();
			c.pop();
		}
		cout << endl;
	}
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <queue>
using namespace std;

priority_queue<int,vector<int>,greater<int> > pq;

int main() {
	string line;
	cin >> line;
	while (!pq.empty()) pq.pop();
	for (int i=0;i<line.size();i++) {
		if (line[i]=='1' || line[i]=='2' || line[i]=='3') {
			pq.push(line[i]-48);
		}
	}
	int ctr = 0;
	while (!pq.empty()) {
		if (ctr>0) printf("+");
		int temp = pq.top();
		pq.pop();
		printf("%d",temp);
		ctr++;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>

using namespace std;
stack<int> st;
queue<int> que;
priority_queue<int> pq;
bool isStack,isQueue,isPrio;
int main() {
	int n,type,num;
	while (scanf("%d",&n)!=EOF) {
		while (!st.empty()) st.pop();
		while (!que.empty()) que.pop();
		while (!pq.empty()) pq.pop();
		isStack = true;
		isQueue = true;
		isPrio = true;
		int sum = 0;
		for (int i=0;i<n;i++) {
			scanf("%d %d",&type,&num);
			if (type==1) {
				st.push(num);
				que.push(num);
				pq.push(num);
			}
			if (type==2) {
				if (!st.empty()) {
					if (st.top()==num) st.pop();
					else isStack = false;
				}
				else isStack = false;
				if (!que.empty()) {
					if (que.front()==num) que.pop();
					else isQueue = false;
				}
				else isQueue = false;
				if (!pq.empty()) {
					if (pq.top()==num) pq.pop();
					else isPrio = false;
				}
				else isPrio = false;
			}
		}
		if (isStack) sum++;
		if (isQueue) sum++;
		if (isPrio) sum++;
		if (sum==0) printf("impossible\n");
		else if (sum==1) {
			if (isStack) printf("stack\n");
			else if (isQueue) printf("queue\n");
			else if (isPrio) printf("priority queue\n");
		}
		else printf("not sure\n");
		
	}
	return 0;
}
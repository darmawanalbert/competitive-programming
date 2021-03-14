#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <stack>
using namespace std;

stack<int> st;
int main() {
	int n;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		while (!st.empty()) st.pop();
		int temp = n;
		int sum = 0;
		int size = 0;
		while (temp!=0) {
			temp/=2;
			size++;
		}
		for (int i=0;i<size;i++) {
			if ((n&(1<<i))>0) {
				sum++;
				st.push(1);
			}
			else st.push(0);
		}
		printf("The parity of ");
		while (!st.empty()) {
			printf("%d",st.top());
			st.pop();
		}
		printf(" is %d (mod 2).\n",sum);
		
	}
	return 0;
}
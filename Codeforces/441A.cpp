#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;

int main() {
	int n,money,num,val;
	vector<int> vi;
	vi.clear();
	scanf("%d %d",&n,&money);
	for (int i=1;i<=n;i++) {
		scanf("%d",&num);
		bool toggle = false;
		for (int j=1;j<=num;j++) {
			scanf("%d",&val);
			if (money>val) toggle = true;
		}
		if (toggle) vi.pb(i);
	}
	cout << vi.size() << endl;
	for (int i=0;i<vi.size();i++) {
		if (i>0) printf(" ");
		printf("%d",vi[i]);
	}
	printf("\n");
	
}
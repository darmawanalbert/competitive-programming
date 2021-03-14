#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#define pb push_back
using namespace std;
const int maks = 1000000;
vector<int> adj[maks+5];
int main() {
	int n,q,temp;
	int pos,num;
	while (scanf("%d %d",&n,&q)!=EOF) {
		for (int i=1;i<=maks;i++) adj[i].clear();
		for (int i=1;i<=n;i++) {
			scanf("%d",&temp);
			adj[temp].pb(i);
		}
		for (int i=0;i<q;i++) {
			scanf("%d %d",&pos,&num);
			if (pos>adj[num].size()) printf("0\n");
			else {
				printf("%d\n",adj[num][pos-1]);
			}
 		}
	}
	return 0;
}
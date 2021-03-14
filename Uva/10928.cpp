#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>
#include <sstream>
#define pb push_back
using namespace std;
const int INF = 1e9;
const int maks = 1000;
vector<int> adj[maks+5];
int main() {
	int t,n,temp;
	string line;
	scanf("%d",&t);
	while (t--) {
		scanf("%d",&n);
		for (int i=1;i<=n;i++) adj[i].clear();
		getchar();
		for (int i=1;i<=n;i++) {
			getline(cin,line);
			istringstream iss(line);
			while (iss >> temp) {
				adj[i].pb(temp);
			}
		}
		int minimum = INF;
		for (int i=1;i<=n;i++) {
			minimum = min(minimum,(int) adj[i].size());
		}
		int ctr = 0;
		for (int i=1;i<=n;i++) {
			if (adj[i].size()==minimum) {
				if (ctr>0) printf(" ");
				printf("%d",i);
				ctr++;
			}
		}
		printf("\n");
	}
	return 0;
}
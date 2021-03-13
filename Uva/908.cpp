#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;

int p[1000005];
vector<pair<int, pair<int,int> > > edgeList;
void init() {
	for (int i=0;i<1000005;i++) p[i] = i; 
}

int find(int x) {
	if (p[x]==x) return x;
	else return (p[x] = find(p[x]));
}
 
void merge(int x,int y) {
	p[find(y)] = p[find(x)];
}

int main() {
	int ctr = 0;
	int n,u,v,w,k,m;
	ll early,sum;
	while (scanf("%d",&n)!=EOF) {
		if (ctr>0) {
			getchar();
			printf("\n");
		}
		init();
		edgeList.clear();
		early = 0;
		sum = 0;
		for (int i=0;i<n-1;i++) {
			scanf("%d %d %d",&u,&v,&w);
			early+=w;
		}
		scanf("%d",&k);
		for (int i=0;i<k;i++) {
			scanf("%d %d %d",&u,&v,&w);
			edgeList.pb(mp(w,mp(u,v)));
		}
		scanf("%d",&m);
		for (int i=0;i<m;i++) {
			scanf("%d %d %d",&u,&v,&w);
			edgeList.pb(mp(w,mp(u,v)));
		}
		sort(edgeList.begin(),edgeList.end());
		for (int i=0;i<m+k;i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			if (find(x)!=find(y)) {
				merge(x,y);
				sum+=edgeList[i].ff;
			}
		}
		printf("%lld\n%lld\n",early,sum);
		ctr++;
	}
	return 0;
}
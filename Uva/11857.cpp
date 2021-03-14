#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <utility>
#include <vector>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;

int p[1000005];
vector<pair<int, pair<int,int> > > edgeList;
void init() {for(int i=0;i<1000005;i++) p[i]=i;}
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {p[find(y)]=p[find(x)];}

int main() {
	int u,v,w,n,e,latest;
	while (scanf("%d %d",&n,&e) !=EOF) {
		if (n==0 && e==0) break;
		edgeList.clear();
		init();
		for (int i=0;i<e;i++) {
			scanf("%d %d %d",&u,&v,&w);
			edgeList.pb(mp(w,mp(u,v)));
		}
		sort(edgeList.begin(),edgeList.end());
		int ctr = 0;
		for (int i=0;i<e;i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			if (find(x)!=find(y)) {
				merge(x,y);
				ctr++;
				latest = edgeList[i].ff;
			}
		}
		if (ctr==(n-1)) {
			printf("%d\n",latest);
		} 
		else printf("IMPOSSIBLE\n");
	}
	return 0;
}
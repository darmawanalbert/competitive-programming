#include <iostream>
#include <cstdio>
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

int p[200005];
void init() {for (int i=0;i<=200000;i++) p[i] = i;}
int find(int x) {return (p[x]==x)?x:(p[x] = find(p[x]));}
void merge(int x,int y) {p[find(y)] = find(x);}

vector<pair<int, pair<int,int> > > edgeList;

int main() {
	int v,e,total;
	while (scanf("%d %d",&v,&e)!=EOF) {
		edgeList.clear();
		init();
		int sum = 0;
		total = 0;
		if (v==0 && e==0) break;
		for (int i=0;i<e;i++) {
			int u,v,w;
			scanf("%d %d %d",&u,&v,&w);
			edgeList.pb(mp(w,mp(u,v)));
			total+=w;
		}
		sort(edgeList.begin(),edgeList.end());
		for (int i=0;i<e;i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			if (find(x)!=find(y)) {
				merge(x,y);
				sum+=edgeList[i].ff;
			}
		}
		printf("%d\n",total-sum);
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <map>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;

int p[2005];
void init() {for (int i=0;i<2005;i++) p[i] = i;}
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {p[find(y)]=p[find(x)];}

vector<pair<int,pair<int,int> > > edgeList;
map<string,int> mmap;

int main() {
	int t,n,e,w;
	int ind = 0;
	string u,v;
	scanf("%d",&t);
	while (t--) {
		if (ind>0) printf("\n");
		int sum = 0;
		int ctr = 1;
		getchar();
		edgeList.clear();
		mmap.clear();
		init();
		scanf("%d",&n);
		scanf("%d",&e);
		getchar();
		for (int i=0;i<e;i++) {
			cin >> u >> v >> w;
			if (mmap.find(u)==mmap.end()) {
				mmap[u] = ctr;
				ctr++;
			}
			if (mmap.find(v)==mmap.end()) {
				mmap[v] = ctr;
				ctr++;
			}
			edgeList.pb(mp(w,mp(mmap[u],mmap[v])));
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
		printf("%d\n",sum);
		ind++;
	}
	return 0;
}
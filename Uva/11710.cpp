#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <utility>
#include <map>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;

int p[405];
map<string,int> mmap;
vector<pair<int, pair<int,int> > > edgeList;

void init() {
	for (int i=0;i<405;i++) p[i] = i;
}

int find(int x) {
	if (p[x]==x) return x;
	else return (p[x]=find(p[x]));
}

void merge(int x,int y) {
	p[find(y)] = p[find(x)];
}

int main() {
	string temp,temp1,from;
	int w,n,e;
	while (scanf("%d %d",&n,&e)!=EOF) {
		if (n==0 && e==0) break;
		init();
		ll sum = 0;
		edgeList.clear();
		mmap.clear();
		for (int i=1;i<=n;i++) {
			cin >> temp;
			mmap[temp] = i;
		}
		for (int i=0;i<e;i++) {
			cin >> temp >> temp1 >> w;
			edgeList.pb(mp(w,mp(mmap[temp],mmap[temp1])));
		}
		cin >> from;
		sort(edgeList.begin(),edgeList.end());
		for (int i=0;i<e;i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			if (find(x)!=find(y)) {
				merge(x,y);
				sum+= edgeList[i].ff;
			}
		}
		bool toggle = true;
		int tmp = find(mmap[from]);
		for (int i=1;i<=n;i++) {
			if (tmp!=find(i)) {
				toggle = false;
				break;
			}
		} 
		if (toggle) printf("%lld\n",sum);
		else printf("Impossible\n");
 	}
}
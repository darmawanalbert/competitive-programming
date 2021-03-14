#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
typedef pair<int, ii> iii;
vector<iii> edgeList;
const int maks = 10000;
int p[maks+5];

int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}

void merge(int x,int y) {
	p[find(y)] = find(x);
}

bool cmp(iii a,iii b) {
	return a.ff > b.ff;
}

int main() {
	int t;
	int n,m;
	int kiri,kanan,w;
	scanf("%d",&t);
	while (t--) {
		edgeList.clear();
		scanf("%d %d",&n,&m);
		for (int i=1;i<=n;i++) p[i] = i;
		int sum = 0;
		for (int i=0;i<m;i++) {
			scanf("%d %d %d",&kiri,&kanan,&w);
			edgeList.pb(mp(w,mp(kiri,kanan)));
			sum+=w;
		}
		sort(edgeList.begin(),edgeList.end(),cmp);
		int tot = 0;
		for (int i=0;i<edgeList.size();i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			if (find(x)!=find(y)) {
				merge(x,y);
				tot+=edgeList[i].ff;
			}
		}
		cout << sum-tot << endl;
	}
	
	return 0;
}
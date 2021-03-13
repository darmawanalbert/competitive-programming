#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#include <set>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
typedef pair<int,int> ii;
const int maks = 100000;

vector<int> adj[maks+5];
int col[maks+5];
bool toggle;
void dfs(int v,int color) {
	if (!toggle) return;
	col[v] = color;
	for (int i=0;i<adj[v].size();i++) {
		int cur = adj[v][i];
		if (col[cur]==-1) dfs(cur,(color+1)%2);
		if (col[cur]==col[v]) {
			toggle= false;
			break;
		}
	}
}

int main() {
	int n,m;
	int kiri,kanan;
	scanf("%d %d",&n,&m);
	for (int i=1;i<=n;i++) adj[i].clear();
	memset(col,-1,sizeof(col));
	for (int i=0;i<m;i++) {
		scanf("%d %d",&kiri,&kanan);
		adj[kiri].pb(kanan);
		adj[kanan].pb(kiri);
	}
	toggle= true;
	for (int i=1;i<=n;i++) {
		if (col[i]==-1 && adj[i].size()>0) {
			dfs(i,0);
		}
	}
	set<int> zero;
	set<int> one;
	if (toggle) {
		for (int i=1;i<=n;i++) {
			if (col[i]==0) zero.insert(i);
			else if (col[i]==1) one.insert(i);
		}
		cout << zero.size() << endl;
		int idx = 0;
		for (set<int>::iterator it = zero.begin();it!=zero.end();++it) {
			if (idx>0) printf(" ");
			cout << *it;
			idx++;
		}
		cout << endl;
		cout << one.size() << endl;
		idx = 0;
		for (set<int>::iterator it = one.begin();it!=one.end();++it) {
			if (idx>0) printf(" ");
			cout << *it;
			idx++;
		}
		cout << endl;
	}
	else cout << -1 << endl;
	return 0;
}
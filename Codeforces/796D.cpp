#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <utility>
#include <queue>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int,int> ii;
const int maks = 300000;

bool visited[maks+5];
vector< ii > adj[maks+5];
queue < ii > q;
set<int> res;
int n,k,d;

int main() {
	int temp;
	int u,v;
	memset(visited,false,sizeof(visited));
	scanf("%d %d %d",&n,&k,&d);
	for (int i=0;i<k;i++) {
		scanf("%d",&temp);
		q.push(mp(temp,0));
	}
	for (int i=1;i<=n-1;i++) {
		scanf("%d %d",&u,&v);
		adj[u].pb(mp(v,i));
		adj[v].pb(mp(u,i));
	}
	while (!q.empty()) {
		int pos = q.front().ff;
		int from = q.front().ss;
		q.pop();
		if (visited[pos]) continue;
		visited[pos] = true;
		for (int i=0;i<adj[pos].size();i++) {
			ii nei = adj[pos][i];
			if (nei.ff !=from) {
				if (visited[nei.ff]) res.insert(nei.ss);
				else q.push(mp(nei.ff,pos)); 
			}
		}
	}
	cout << res.size() << endl;
	int ctr = 0;
	for (set<int>::iterator it = res.begin();it!=res.end();++it) {
		if (ctr>0) printf(" ");
		cout << *it;
		ctr++;
	}
	cout << endl;
	return 0;
}
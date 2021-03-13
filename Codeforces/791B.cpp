#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<ll,ll> ii;

const ll maks = 150000;
vector<ii> adj[maks+5];
bool visited[maks+5];
bool edgeVisited[maks+5];
ll cc,edge;

void dfs(ll vertex) {
	visited[vertex] = true;
	cc++;
	for (ll i=0;i<adj[vertex].size();i++) {
		ii cur = adj[vertex][i];
		if (!edgeVisited[cur.ss]) {
			edge++;
			edgeVisited[cur.ss] = true;
		}
		if (visited[cur.ff]) continue;
		dfs(cur.ff);
	}
}

int main() {
	ll n,m,kiri,kanan;
	bool toggle = true;
	memset(visited,false,sizeof(visited));
	memset(edgeVisited,false,sizeof(edgeVisited));
	scanf("%lld %lld",&n,&m);
	for (ll i=1;i<=n;i++) {
		adj[i].clear();
	}
	for (ll i=0;i<m;i++) {
		scanf("%lld %lld",&kiri,&kanan);
		adj[kiri].pb(mp(kanan,i));
		adj[kanan].pb(mp(kiri,i));
	}
	for (ll i=1;i<=n;i++) {
		if (!visited[i]) {
			cc = 0;
			edge = 0;
			dfs(i);
			if ((cc!=1) && (cc*(cc-1)!=edge*2)) {
				toggle = false;
				break;
			}
		}
	}
	if (toggle) printf("YES\n");
	else printf("NO\n");
	return 0;
}

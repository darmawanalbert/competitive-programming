#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
typedef long long ll;

ll a[100005];
ll st[600005];

ll getLeft(ll p) {return p << 1;}
ll getRight(ll p) {return (p<<1)+1;}

void init(ll idx,ll kiri,ll kanan) {
	if (kiri==kanan) st[idx] = kiri;
	else {
		init(getLeft(idx),kiri,(kiri+kanan)/2);
		init(getRight(idx), ((kiri+kanan)/2)+1, kanan);
		ll p1 = st[getLeft(idx)];
		ll p2 = st[getRight(idx)];
		if (a[p1]<=a[p2]) st[idx] = p1;
		else st[idx] = p2;
	}
}
ll rmq(ll idx,ll kiri,ll kanan,ll i,ll j) {
	if (kiri>j || kanan<i) return -1;
	if (kiri>=i && kanan<=j) return st[idx];
	
	ll p1 = rmq(getLeft(idx),kiri,(kiri+kanan)/2,i,j);
	ll p2 = rmq(getRight(idx),((kiri+kanan)/2)+1,kanan,i,j);
	
	if (p1==-1) return p2;
	if (p2==-1) return p1;
	if (a[p1]<=a[p2]) return p1;
	else return p2;
}

int main() {
	ll tc,n,q,l,r;
	scanf("%lld",&tc);
	for (ll ctr = 1;ctr<=tc;ctr++) {
		scanf("%lld %lld",&n,&q);
		for (ll i=1;i<=n;i++) scanf("%lld",&a[i]);
		memset(st,true,sizeof(st));
		init(1,1,n);
		printf("Scenario #%lld:\n",ctr);
		for (ll i=0;i<q;i++) {
			scanf("%lld %lld",&l,&r);
			printf("%lld\n",a[rmq(1,1,n,l,r)]);
		}
	}
	return 0;
}
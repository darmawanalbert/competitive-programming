#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>
#include <cmath>
#define ll long long
#define pb push_back
using namespace std;


int n,m;

vector<int> pos[300005],mid[300005];

int lo[300005],hi[300005];
int tar[300005];
ll bit[300005];

int lm[300005],rm[300005],vm[300005];
int ans[300005];

void upd( int p, ll v) {
	for ( ; p <= m; p += (p &(-p))){
		bit[p] += v;
	}
}

void update( int a, int b, ll v ){
	upd(a,v);
	upd(b+1,-v);
}

ll query( int x ){
	ll sum = 0;
	for ( ; x > 0 ; x -= (x&(-x))){
		sum += bit[x];
	}
	return sum;
}

void updatemeteor( int x ){
	if ( rm[x] < lm[x] ){
		update(1,rm[x],vm[x]);
		update(lm[x],m,vm[x]);
	} else {
		update(lm[x],rm[x],vm[x]);
	}
}

int main(int argc, char *argv[]) {
	scanf("%d %d",&n,&m);
	for(int a=1;a<=m;a++)
	{
		int temp;
		scanf("%d",&temp);
		pos[temp].pb(a);
	}
	for(int a=1;a<=n;a++) scanf("%d",&tar[a]), ans[a] = -1 ;
	int k;
	scanf("%d",&k);
	for(int a=1;a<=k;a++) scanf("%d %d %d",&lm[a],&rm[a],&vm[a]);
	for(int a=1;a<=n;a++)
	{
		lo[a] = 1;
		hi[a] = k;
		mid[(lo[a] + hi[a])/2].pb(a);
	}
	int step = ceil(log2(k));
	for(int a=1;a<=step;a++)
	{
		//printf("%d\n",a);
		memset(bit,0,sizeof(bit));
		for(int b=1;b<=k;b++)
		{
			updatemeteor(b);
			while(!mid[b].empty())
			{
				int satelite = mid[b].back();
				mid[b].pop_back();
				int total = 0;
				for(int sz = 0 ; sz< pos[satelite].size() && total<tar[satelite];sz++)
				{
					total += query(pos[satelite][sz]);
					//query(1), query(4)
				}
				if(total>=tar[satelite])
				{
					hi[satelite] = b - 1;
					ans[satelite] = b;
				}
				else lo[satelite] = b + 1;
				if ( (lo[satelite]+hi[satelite])/2 == b ) continue;
				mid[(lo[satelite]+hi[satelite])/2].pb(satelite);
			}
		}
	}
	for(int a=1;a<=n;a++){
		if ( ans[a] == -1 ) printf("NIE\n");
		else printf("%d\n",ans[a]);
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
using namespace std;
vector< pair<double, pair<int,int> > > edgeList;
const int maks = 100;
double x[maks+5];
double y[maks+5];
int p[maks+5];
void init() {for(int i=0;i<=maks;i++) p[i]=i;}
int find(int x) {return (p[x]==x)?x:(p[x]=find(p[x]));}
void merge(int x,int y) {p[find(y)]=p[find(x)];}
int main() {
	int t;
	int n;
	scanf("%d",&t);
	int ctr = 0;
	while (t--) {
		double acc = 0.0;
		init();
		edgeList.clear();
		if (ctr>0) printf("\n");
		scanf("%d",&n);
		for (int i=0;i<n;i++) {
			scanf("%lf %lf",&x[i],&y[i]);
		}
		for (int i=0;i<n-1;i++) {
			for (int j=i+1;j<n;j++) {
				double dist = sqrt((y[j]-y[i])*(y[j]-y[i]) + (x[j]-x[i])*(x[j]-x[i]));
				edgeList.pb(mp(dist,mp(i,j)));
			}
		}
		sort(edgeList.begin(),edgeList.end());
		for (int i=0;i<edgeList.size();i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			if (find(x)!=find(y)) {
				merge(x,y);
				acc+=edgeList[i].ff;
			}
		}
		printf("%.2lf\n",acc);
		ctr++;
	}
	return 0;
}
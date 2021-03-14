#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;

vector< pair<int, pair<int,int> > > edgeList;
const int maks = 1000;
int a[maks+5][maks+5];
int p[maks+5];

void init() {for (int i=0;i<=maks;i++) p[i] = i;}
int find(int x) {return (p[x]==x)?x:(p[x] = find(p[x]));}
void merge(int x,int y) {p[find(y)]=p[find(x)];}

int toNumber(string x) {
	int ans = 0;
	int mul = 1;
	for (int i=x.size()-1;i>=0;i--) {
		ans+=(((int)(x[i]-48))*mul);
		mul*=10;
	}
	return ans;
}

int main() {
	int t,n;
	string line,temp;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		init();
		memset(a,0,sizeof(a));
		edgeList.clear();
		scanf("%d",&n);
		getchar();
		for (int i=0;i<n;i++) {
			getline(cin,line);
			temp = "";
			int col = 0;
			for (int j=0;j<line.size();j++) {
				if (line[j]>='0' && line[j]<='9') temp+=line[j];
				else if (line[j]==',') {
					a[i][col] = toNumber(temp);
					temp = "";
					col++;
				}
				else if (j==line.size()-1) {
					temp+=line[j];
					a[i][col] = toNumber(temp);
					temp = "";
					col++;
				}
			}
		}
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (a[i][j]!=0) edgeList.pb(mp(a[i][j],mp(i,j)));
			}
		}
		printf("Case %d:\n",ctr);
		sort(edgeList.begin(),edgeList.end());
		for (int i=0;i<edgeList.size();i++) {
			int x = edgeList[i].ss.ff;
			int y = edgeList[i].ss.ss;
			int z = edgeList[i].ff;
			if (find(x)!=find(y)) {
				merge(x,y);
				printf("%c-%c %d\n",min((char)x+65,(char)y+65),max((char)x+65,(char)y+65),z);
			}
		}
	}

	return 0;
}
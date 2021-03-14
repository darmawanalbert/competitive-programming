#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
#include <set>
#include <vector>
#include <utility>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std;
map<char,int> mmap;
vector< pair<char,int> > vc;
const int maks = 1000;
bool visited[maks+5][maks+5];
char a[maks+5][maks+5];

int height,width;

int drow[10] = {1,0,-1,0};
int dcol[10] = {0,1,0,-1};

bool comp(pair<char,int> a,pair<char,int> b) {
	if (a.ss == b.ss) return a.ff < b.ff;
	return a.ss > b.ss;
}

void dfs(int row,int col, char x) {
	visited[row][col] = true;
	for (int i=0;i<4;i++) {
		int rrow = row + drow[i];
		int ccol = col + dcol[i];
		if (rrow<0 || ccol<0 || rrow>=height || ccol>=width) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]!=x) continue;
		if (a[rrow][ccol]==x) dfs(rrow,ccol,x);
	}
}

int main() {
	int t;
	string line;
	scanf("%d",&t);
	for (int ctr = 1;ctr<=t;ctr++) {
		scanf("%d %d",&height,&width);
		for (int i=0;i<height;i++) {
			cin >> line;
			for (int j=0;j<width;j++) a[i][j] = line[j];
		}
		mmap.clear();
		memset(visited,false,sizeof(visited));
		for (int i=0;i<height;i++) {
			for (int j=0;j<width;j++) {
				if (!visited[i][j]) {
					dfs(i,j,a[i][j]);
					if (mmap.find(a[i][j])==mmap.end()) mmap[a[i][j]] = 1;
					else mmap[a[i][j]]++;
				}
			}
		}
		vc.clear();
		printf("World #%d\n",ctr);
		for (map<char,int>::iterator it = mmap.begin();it!=mmap.end();++it) {
			vc.pb(mp(it->first,it->second));
		}
		sort(vc.begin(),vc.end(),comp);
		for (int i=0;i<vc.size();i++) {
			printf("%c: %d\n",vc[i].ff,vc[i].ss);
		}
	}
}
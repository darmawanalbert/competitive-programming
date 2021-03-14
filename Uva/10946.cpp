#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

using namespace std;

int r,c;

char a[55][55];
bool visited[55][55];
int acc;
vector< pair<char,int> > holes;

//int drow[] = {1,1,0,-1,-1,-1,0,1};
//int dcol[] = {0,1,1,1,0,-1,-1,-1};
int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};
bool comp(pair<char,int> a, pair<char,int> b) {
	if (a.ss == b.ss) return a.ff <b.ff;
	else return a.ss > b.ss;
}

void dfs(int row,int col, char letter) {
	acc++;
	visited[row][col] = true;
	for (int i=0;i<8;i++) {
		int rrow = row + drow[i];
		int ccol = col + dcol[i];
		if (rrow<0 || ccol<0 || rrow>=r || ccol>= c) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]==letter) dfs(rrow,ccol,letter);
	}
}

int main() {
	string line;
	int ctr =1;
	while (scanf("%d %d",&r,&c)!=EOF) {
		if (r==0 && c==0) break;
		holes.clear();
		memset(visited,false,sizeof(visited));
		for (int i=0;i<r;i++) {
			cin >> line;
			for (int j=0;j<c;j++) a[i][j] = line[j];
		}
		acc = 0;
		for (int i=0;i<r;i++) {
			for (int j=0;j<c;j++) {
				if (!visited[i][j] && a[i][j]>=65 && a[i][j]<=90) {
					dfs(i,j,a[i][j]);
					holes.pb(mp(a[i][j],acc));
					acc = 0;
				}
			}
		}
		sort(holes.begin(),holes.end(),comp);
		printf("Problem %d:\n",ctr);
		for (int i=0;i<holes.size();i++) {
			printf("%c %d\n",holes[i].ff,holes[i].ss);
		}
		ctr++;
	}
	return 0;
}
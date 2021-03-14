#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <string>

using namespace std;
const int INF = 1e9;
int r,c;
char a[25][25];
bool visited[25][25];

int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};
int maks;
void dfs(int row,int col,int area,bool ignore) {
	visited[row][col] = true;
	if (!ignore) maks = max(maks,area);
	for (int i=0;i<4;i++) {
		int rrow = row + drow[i];
		int ccol = col + dcol[i];
		if (rrow<0 || ccol<0 || rrow>=r || ccol>=c) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]=='l') dfs(rrow,ccol,area+1,ignore);
	}
}

int main() {
	int x,y;
	string line;
	while (scanf("%d %d",&r,&c)!=EOF) {
		memset(visited,false,sizeof(visited));
		for (int i=0;i<r;i++) {
			cin >> line;
			for (int j=0;j<line.size();j++) a[i][j] = line[j];
		}
		maks = 0;
		scanf("%d %d",&x,&y);
		for (int i=0;i<r;i++) {
			for (int j=0;j<c;j++) {
				if (a[i][j]=='l') {
					if (i==x && j==y) dfs(i,j,1,true);
					else dfs(i,j,1,false);
				}
			}
		}
		printf("%d\n",maks);
	}
}
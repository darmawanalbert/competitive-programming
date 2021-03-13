#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define pb push_back
using namespace std;

bool visited[105][105];
char a[105][105];

int dcol[10] = {0,1,1,1,0,-1,-1,-1};
int drow[10] = {1,1,0,-1,-1,-1,0,1};
int row,col;

void dfs(int baris,int kolom) {
	visited[baris][kolom] = true;
	for (int i=0;i<8;i++) {
		int ccol = kolom + dcol[i];
		int rrow = baris + drow[i];
		if (ccol>=col || rrow>=row || ccol<0 || rrow<0) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]!='@') continue;
		if (!visited[rrow][ccol]) dfs(rrow,ccol);
	}
}

int main() {
	int ctr;
	while (scanf("%d %d",&row,&col)!=EOF) {
		if (row==0) break;
		memset(visited,false,sizeof(visited));
		for (int i=0;i<row;i++) {
			for (int j=0;j<col;j++) cin >> a[i][j];
		}
		ctr = 0;
		for (int i=0;i<row;i++) {
			for (int j=0;j<col;j++) {
				if ((a[i][j]=='@') && !visited[i][j]) {
					dfs(i,j);
					ctr++;
				}
			}
		}
		printf("%d\n",ctr);
	}
	
	return 0;	
}
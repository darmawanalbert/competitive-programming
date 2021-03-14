#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int r,c;
int acc;
bool visited[105][105];
char a[105][105];
int drow[] = {1,1,0,-1,-1,-1,0,1};
int dcol[] = {0,1,1,1,0,-1,-1,-1};

void dfs(int row,int col) {
	visited[row][col] = true;
	acc++;
	for (int i=0;i<8;i++) {
		int rrow = row + drow[i];
		int ccol = col + dcol[i];
		if (rrow<0 || ccol<0 || rrow>=r || ccol>=c) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]=='*') dfs(rrow,ccol);
	}
}

int main() {
	string line;
	while (scanf("%d %d",&r,&c)!=EOF) {
		if (r==0 && c==0) break;
		memset(visited,false,sizeof(visited));
		for (int i=0;i<r;i++) {
			cin >> line;
			for (int j=0;j<c;j++) a[i][j] = line[j];
		}
		acc = 0;
		int sum = 0;
		for (int i=0;i<r;i++) {
			for (int j=0;j<c;j++) {
				if (!visited[i][j] && a[i][j]=='*') {
					dfs(i,j);
					if (acc==1) sum++;
					acc = 0;
				}
			}
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

char a[105][105];
bool visited[105][105];
string warna = "BW";
int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};

int n,m;
void dfs(int row, int col, int color) {
	visited[row][col] = true;
	a[row][col] = warna[color];
	for (int i=0;i<4;i++) {
		int rrow = row + drow[i];
		int ccol = col + dcol[i];
		if (rrow<0 || ccol<0 || rrow>=n || ccol>=m) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]!='.') continue;
		else dfs(rrow,ccol,(color+1)%2);
	}
}


int main() {
	string line;
	memset(visited,false,sizeof(visited));
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++) {
		cin >> line;
		for (int j=0;j<m;j++) a[i][j] = line[j];
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			if (a[i][j]=='.' && !visited[i][j]) dfs(i,j,0);
		}
	}
	for (int i=0;i<n;i++) {
		for (int j=0;j<m;j++) {
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}
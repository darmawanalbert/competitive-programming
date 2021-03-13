#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

char a[205][205];
bool visited[205][205];
int n;
bool isBlack;
int drow[8] = {-1,-1,0,0,1,1};
int dcol[8] = {-1,0,-1,1,0,1};

void dfs(int row,int col) {
	visited[row][col] = true;
	if (a[row][col]=='b' && row==n-1) {
		isBlack = true;
	}
	else {
		for (int i=0;i<6;i++) {
			int rrow = row+drow[i];
			int ccol = col + dcol[i];
			if (ccol<0 || rrow<0 || ccol>=n || rrow>=n) continue;
			if (visited[rrow][ccol]) continue;
			if (a[rrow][ccol]!='b') continue;
			if (a[rrow][ccol]=='b') dfs(rrow,ccol);
		}
	}

}

int main() {
	string line;
	int ctr = 1;
	while (scanf("%d",&n)!=EOF) {
		if (n==0) break;
		isBlack = false;
		memset(visited,false,sizeof(visited));
		for (int i=0;i<n;i++) {
			cin >> line;
			for (int j=0;j<n;j++) a[i][j] = line[j];
		}
		for (int i=0;i<n;i++) {
			if (a[0][i]=='b' && !visited[0][i]) dfs(0,i);
		}
		if (isBlack) printf("%d B\n",ctr);
		else printf("%d W\n",ctr);
		ctr++;
	}
	return 0;
}
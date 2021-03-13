#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int a[30][30];
bool visited[30][30];

int drow[10] = {1,1,0,-1,-1,-1,0,1};
int dcol[10] = {0,1,1,1,0,-1,-1,-1};

int n;

void dfs(int row,int col) {
	visited[row][col] = true;
	for (int i=0;i<8;i++) {
		int rrow = row+drow[i];
		int ccol = col+dcol[i];
		if (rrow<0 || ccol<0 || rrow>=n || ccol>=n) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]!=1) continue;
		else dfs(rrow,ccol);
	}
}


int main() {
	string line;
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int it = 1;
	while (scanf("%d",&n)!=EOF) {
		for (int i=0;i<n;i++) {
			cin >> line;
			for (int j=0;j<line.size();j++) {
				int temp = line[j]-48;
				a[i][j] = temp;
			}
		}
		int ctr = 0;
		memset(visited,false,sizeof(visited));
		for (int i=0;i<n;i++) {
			for (int j=0;j<n;j++) {
				if (a[i][j]==1 && !visited[i][j]) {
					dfs(i,j);
					ctr++;
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",it,ctr);
		it++;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#define pb push_back

using namespace std;

int a[105][105];
bool visited[105][105];
int r,c;
int acc,maks;
int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};

int toNumber(string a) {
	int ans = 0;
	int mul = 1;
	for (int i=a.size()-1;i>=0;i--) {
		ans+=((a[i]-48)*mul);
		mul*=10;
	}
	return ans;
}

void dfs(int row,int col) {
	visited[row][col] = true;
	acc++;
	for (int i=0;i<4;i++) {
		int rrow = row + drow[i];
		int ccol = col + dcol[i];
		if (rrow<0 || ccol<0 || rrow>=r || ccol>=c) continue;
		if (visited[rrow][ccol]) continue;
		if (a[rrow][ccol]==0) dfs(rrow,ccol);
	}
}

int main() {
	int t;
	string line1,line2,line;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		if (ctr>1) printf("\n");
		memset(visited,false,sizeof(visited));
		cin >> line1 >> line2;
		int startR = toNumber(line1);
		int startC = toNumber(line2);
		r = 0;
		getchar();
		while (getline(cin,line)) {
			if (line=="") break;
			if (r==0) c = line.size();
			for (int i=0;i<line.size();i++) a[r][i] = line[i]-48;
			r++;
		}
		acc = 0;
		dfs(startR-1,startC-1);
		printf("%d\n",acc);
	}
	
	return 0;
}
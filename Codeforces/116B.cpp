#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#define mp make_pair

using namespace std;
const int maks = 10;
char a[maks+5][maks+5];
int r,c;
int drow[] = {1,0,-1,0};
int dcol[] = {0,1,0,-1};
bool visited[maks+5][maks+5];
int main() {
	scanf("%d %d",&r,&c);
	for (int i=0;i<r;i++) {
		scanf("%s",a[i]);
	}
	int acc = 0;
	memset(visited,false,sizeof(visited));
	for (int i=0;i<r;i++) {
		for (int j=0;j<c;j++) {
			if (a[i][j]=='P') {
				for (int u=0;u<4;u++) {
					int rrow= i + drow[u];
					int ccol = j + dcol[u];
					if (rrow<0 || ccol<0 || rrow>=r || ccol>=c) continue;
					if (visited[rrow][ccol]) continue;
					if (a[rrow][ccol]=='W') {
						acc++;
						visited[rrow][ccol] = true;
					}
				}
			}
		}
	}
	printf("%d\n",acc);
	return 0;
}
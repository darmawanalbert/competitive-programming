#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

char a[305][305];
bool visited[305][305];
int main() {
	int n;
	string line;
	scanf("%d",&n);
	memset(visited,false,sizeof(visited));
	for (int i=0;i<n;i++) {
		cin >> line;
		for (int j=0;j<n;j++) a[i][j] = line[j];
	}
	char x = a[0][0];
	char y = a[0][1];
	bool isX = true;
	for (int i=0;i<n;i++) {
		visited[i][i] = true;
		if (a[i][i]!=x) {
			isX = false;
		}
	}
	int ctr = n-1;
	for (int i=0;i<n;i++) {
		visited[i][ctr] = true;
		if (a[i][ctr]!=x) {
			isX = false;
		}
		ctr--;
	}
	bool isY = true;
	for (int i=0;i<n;i++) {
		for (int j=0;j<n;j++) {
			if (!visited[i][j]) {
				visited[i][j] = true;
				if (a[i][j]!= y) isY = false;
			}
		}
	}
	if (isY && isX && (y!=x)) printf("YES\n");
	else printf("NO\n");
	return 0;
}
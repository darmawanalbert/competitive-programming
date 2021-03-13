#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int drow[] = {1,1,0,-1,-1,-1,0,1};
int dcol[] = {0,1,1,1,0,-1,-1,-1};

int main() {
	string line;
	cin >> line;
	int col = line[0]-96;
	int row = line[1]-48;
	int ans = 0;
	for (int i=0;i<8;i++) {
		int rrow = row + drow[i];
		int ccol = col+dcol[i];
		if (rrow<1 || ccol<1 || rrow>8 || ccol>8) {
			ans = ans;
		}
		else ans++;
	}
	printf("%d\n",ans);
	return 0;
	
}
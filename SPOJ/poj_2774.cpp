#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int memo[100005][100005];

int dp(string a, string b) {
	int lena = a.length();
	int lenb = b.length();
	for (int i=0;i<=lena;i++) {
		for (int j=0;j<=lenb;j++) {
			if (i==0 || j==0) memo[i][j] = 0;
			else if (a[i-1]==b[j-1]) memo[i][j] = memo[i-1][j-1] + 1;
			else memo[i][j] = max(memo[i-1][j],memo[i][j-1]);
		}
	}
	return memo[lena][lenb];
}

int main() {
	
	string a,b;
	cin >> a;
	cin >> b;
	printf("%d\n",dp(a,b));
}
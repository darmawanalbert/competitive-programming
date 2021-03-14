#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;
const int maks = 1000;
int memo[maks+5][maks+5];
int lcs(string a,string b) {
	int lena = a.size();
	int lenb = b.size();
	for (int i=0;i<=lena;i++) {
		for (int j=0;j<=lenb;j++) {
			if (i==0 || j==0) memo[i][j] = 0;
			else {
				if (a[i-1] == b[j-1]) memo[i][j] = memo[i-1][j-1]+1;
				else memo[i][j] = max(memo[i-1][j],memo[i][j-1]);
			}
		}
	}
	return memo[lena][lenb];
}


int main() {
	string a;
	string b;
	while (getline(cin,a)) {
		getline(cin,b);
		cout << lcs(a,b) << endl;
	}
	return 0;
}
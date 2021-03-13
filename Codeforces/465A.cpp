#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
const int INF = 1e9;
const double PI = acos(-1);

int main() {
	int n;
	scanf("%d",&n);
	string line;
	cin >> line;
	int ans = 0;
	for (int i=0;i<n;i++) {
		ans++;
		if (line[i]=='1') continue;
		else break;
	}
	cout << ans << endl;
	return 0;
}
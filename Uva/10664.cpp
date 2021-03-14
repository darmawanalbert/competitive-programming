#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>

using namespace std;
const int maks = 20;
int a[maks+5];

int memo[maks+5][105];

int dp(int idx,int cap) {
	if (cap==0) return 1;
	if (cap<0) return 0;
	if (idx<0) return (cap==0);
	int &rem = memo[idx][cap];
	if (rem!=-1) return rem;
	return rem = max(dp(idx-1,cap-a[idx]),dp(idx-1,cap));
} 

int main() {
	int t,temp,sum;
	scanf("%d",&t);
	getchar();
	string line;
	while (t--) {
		getline(cin,line);
		istringstream iss(line);
		sum = 0;
		int index = 0;
		while (iss>> temp) {
			sum+=temp;
			a[index++] = temp;
		}
		memset(memo,-1,sizeof(memo));	
		if (sum%2==0) {
			if (dp(index-1,sum/2)==1) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
	}
	return 0;
}
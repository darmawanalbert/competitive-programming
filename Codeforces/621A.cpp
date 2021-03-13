#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#define pb push_back

using namespace std;
typedef long long ll;
int main() {
	int n;
	int temp;
	ll acc = 0;
	vector<int> odd;
	scanf("%d",&n);
	odd.clear();
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		if (temp%2==0) acc+=temp;
		else odd.pb(temp);
	}
	if (odd.size()%2==0) {
		for (int i=0;i<odd.size();i++) acc+=odd[i];
	}
	else {
		sort(odd.begin(),odd.end(),greater<int>());
		for (int i=0;i<odd.size()-1;i++) acc+=odd[i];
	}
	printf("%lld\n",acc);
	
	
	return 0;
}
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <set>
using namespace std;
set<string> sset;
bool isNumber (string x) {
	bool ans = true;
	for (int i=0;i<x.size();i++) {
		if (x[i]>=48 && x[i]<=57) continue;
		else {
			ans = false;
			break;
		}
	}
	return ans;
}

int toNumber(string x) {
	int mul = 1;
	int ans = 0;
	for (int i=x.size()-1;i>=0;i--) {
		int temp = (int) x[i]-48;
		ans+=(mul*temp);
		mul*=10;
	}
	return ans;
}

int main() {
	int n;
	sset.clear();
	sset.insert("ABSINTH");
	sset.insert("BEER");
	sset.insert("BRANDY");
	sset.insert("CHAMPAGNE");
	sset.insert("GIN");
	sset.insert("RUM");
	sset.insert("SAKE");
	sset.insert("TEQUILA");
	sset.insert("VODKA");
	sset.insert("WHISKEY");
	sset.insert("WINE");
	string line;
	scanf("%d",&n);
	int acc = 0;
	while (n--) {
		cin >> line;
		if (isNumber(line)) {
			int val = (int) toNumber(line);
			if (val<18) acc++;
		}
		else {
			if (sset.find(line)!=sset.end()) acc++;
		}
	}
	
	printf("%d\n",acc);
	return 0;
}
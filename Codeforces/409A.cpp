#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <utility>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
typedef long long ll;


int main() {
	string a;
	cin >> a;
	int maks = 0;
	int acc = 0;
	for (int j=0;j<a.size()-1;j++) {
			if (a[j]=='V' && a[j+1]=='K') acc++;
	}
	maks = max(maks,acc);
	string temp;
	for (int i=0;i<a.size();i++) {
		temp = a;
		int acc = 0;
		if (temp[i]=='V') temp[i] = 'K';
		else if (temp[i]=='K') temp[i] = 'V';
		for (int j=0;j<temp.size()-1;j++) {
			if (temp[j]=='V' && temp[j+1]=='K') acc++;
		}
		maks = max(maks,acc);
	}
	printf("%d\n",maks);
	
	return 0;
}
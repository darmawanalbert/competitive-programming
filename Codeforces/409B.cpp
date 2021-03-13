#include <iostream>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#define pb push_back
using namespace std;

int main() {
	string x,y,z;
	y = "";
	cin >> x;
	cin >> z;
	bool toggle = true;
	for (int i=0;i<x.size();i++) {
		if (x[i]<z[i]) {
			toggle = false;
			break;
		}
		else y+=z[i];
	}
	if (toggle) cout << y << endl;
	else cout << -1 << endl;
	return 0;
}
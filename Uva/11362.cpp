#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
#include <vector>
#define pb push_back
using namespace std;
vector<string> vec;
int main() {
	int t;
	int n;
	string line;
	scanf("%d",&t);
	while (t--) {
		vec.clear();
		bool toggle= true;
		scanf("%d",&n);
		while (n--) {
			cin >> line;
			for (int i=0;i<vec.size();i++) {
				string temp = vec[i];
				if (temp.size()==line.size()) {
					if (temp==line) toggle = false;
				}
				else if (temp.size()<line.size()) {
					string temp2 = line.substr(0,(int)temp.size());
					if (temp==temp2) toggle= false;
				}
				else if (temp.size()>line.size()) {
					string temp2 = temp.substr(0,(int)line.size());
					if (line==temp2) toggle= false;
				}
			}
			vec.pb(line);
		}
		if (toggle) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
	return 0;
}
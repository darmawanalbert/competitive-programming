#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;
typedef long long ll;
int main() {
	string line;
	ll a,b;
	while (cin >> line) {
		sort(line.begin(),line.end());
		for (ll i=0;i<line.size();i++) {
			if (line[i]!='0') {
				swap(line[0],line[i]);
				break;
			}
		}
		istringstream iss;
		iss.str(line);
		iss >> b;
		sort(line.begin(),line.end(),greater<int>());
		istringstream iss2(line);
		iss2 >> a;
		printf("%lld - %lld = %lld = 9 * %lld\n",a,b,a-b,(a-b)/9);
	}
	return 0;
}
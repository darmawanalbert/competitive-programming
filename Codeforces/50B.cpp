#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
typedef long long ll;
ll counter[300];

int main() {
	string line;
	cin >> line;
	ll acc = 0;
	memset(counter,0,sizeof(counter));
	for (int i=0;i<line.size();i++) counter[line[i]]++;
	for (int i=0;i<300;i++) acc+=(counter[i]*counter[i]);
	printf("%lld\n",acc);
	return 0;
}
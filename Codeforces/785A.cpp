#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() {
	ll n;
	string line;
	scanf("%lld",&n);
	ll acc = 0;
	while (n--) {
		cin >> line;
		for (int i=0;i<line.size();i++) if (line[i]>=65 && line[i]<=90) line[i]+=32;
		if (line=="tetrahedron") acc+=4;
		else if (line=="cube") acc+=6;
		else if (line=="octahedron") acc+=8;
		else if (line=="dodecahedron") acc+=10;
		else if (line=="icosahedron") acc+=20;
	}
	printf("%lld\n",acc);
	return 0;
}
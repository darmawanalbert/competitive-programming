#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int n,m;
	scanf("%d %d",&n,&m);
	int point = n*m;
	int acc = 0;
	while (point>0) {
		acc++;
		n--;
		m--;
		point = point- (1+n+m);
	}
	if (acc%2==0) cout << "Malvika" << endl;
	else cout << "Akshat" << endl;
	return 0;
}
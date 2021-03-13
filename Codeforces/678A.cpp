#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n,k;
	scanf("%d%d",&n,&k);
	if (n%k==0) {
		cout << n+k << endl;
	}
	else {
		int div = (n/k)+1;
		div*=k;
		cout << div << endl;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int a,b,c;
	int t;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d %d",&a,&b,&c);
		if ((a+b)>c && (b+c)>a && (a+c)>b) cout << "OK" << endl;
		else cout << "Wrong!!" << endl;
	}
	return 0;
}
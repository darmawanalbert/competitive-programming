#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;
const int maks = 5;
int a[maks+5];
int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
		scanf("%d %d %d %d",&a[0],&a[1],&a[2],&a[3]);
		sort(a,a+4);
		if (a[0]==0 || a[1]==0 || a[2]==0 || a[3]==0) cout << "banana" << endl;
		else if (a[0]==a[1] && a[1]==a[2] && a[2]==a[3]) cout << "square" << endl;
		else if (a[0]==a[1] && a[2]==a[3] && a[1]!=a[2]) cout << "rectangle" << endl;
		else if (a[0]+a[1]+a[2]>a[3]) cout << "quadrangle" << endl;
		else cout << "banana" << endl;
	}
	
	return 0;
}
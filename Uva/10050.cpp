#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void) {
	int h[3655];
	int a[105];
	int t,n,sum,p;
	cin >> t;
	while (t--) {
		sum = 0;
		memset(h,0,sizeof(h));
		cin >> n;
		cin >> p;
		for (int i=1;i<=p;i++) {
			cin >> a[i];
		}
		for (int i=1;i<=p;i++) {
			for (int j=1;j<=n;i++) {
				if (j%a[i]==0 && h[j]==0) {
					h[j] = 1;
					sum++;
				}
			}
		}
		cout << sum << endl;
	}
}
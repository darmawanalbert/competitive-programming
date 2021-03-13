#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
int main(void) {
	int h,w,n,temp;
	int a[10005];
	cin >> h >> w >> n;
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		temp = w;
		for (int i=0;i<n;i++) {
			if (h==0) {
				cout << "YES" << endl;
				break;
			}
			temp -= a[i];
			if (temp<0) {
				cout << "NO" << endl;
				break;
			}
			if (temp==0) {
				temp = w;
				h--;
			}
		}
}
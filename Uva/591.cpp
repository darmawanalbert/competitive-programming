#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void) {
	int a[55];
	int ctr,avg,sum,k;
	ctr = 0;
	while (cin >> k) {
		if(k==0) break;
		ctr++;
		avg = 0;
		sum = 0;
		for (int i=0;i<k;i++) {
			cin >> a[i];
			avg+=a[i];
		}
		avg /= k;
		for (int i=0;i<k;i++) {
			if (a[i]<avg) {
				sum += avg-a[i];
			}
		}
		cout << "Set #" << ctr << endl;
		cout << "The minimum number of moves is " << sum << "." << endl<<endl;
	}
}
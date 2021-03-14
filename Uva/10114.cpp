#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void) {
	double a[105];
	int m,nd,temp;
	double dp,loan,carworth,cur,percentage,decr;
	while (cin >> m >> dp >> loan >> nd) {
		if (m<0) break;
		memset(a,0,sizeof(a));
		carworth = loan+dp;
		decr = loan/m;
		for (int i=1;i<=nd;i++) {
			cin >> temp >> percentage;
			a[temp] = percentage;
		}
		//cout << a[1] << endl;
		if (carworth >loan) {
			cout << "0 months" << endl;
			continue;
		}
		carworth = (1-a[0]) * carworth;
		loan -= decr;
		
		if (carworth>loan) {
			cout << "1 month" << endl;
			continue;
		}
		cur = a[0];
	 	for (int i=1;i<=m;i++){
			if(a[i]!=0) {
				carworth = (1-a[i]) * carworth;
				cur = a[i];
			}
			else {
				carworth = (1-cur) * carworth;
			}
			loan -= decr;
			if (carworth>loan) {
				cout << i+1 << " months"<< endl;
				break;
			}
		}
	}
}
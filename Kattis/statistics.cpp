#include <iostream>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
int main(void) {
	int n,min,max,range,ctr;
	int array[50];
	ctr = 1;
	while(cin >> n) {
		for (int i=0;i<n;i++) {
			cin >> array[i];
		}
		min = array[0];
		max = array[0];
		for (int i=1;i<n;i++) {
			if (array[i]<min) {
				min = array[i];
			}
		}
		
		for (int i=1;i<n;i++) {
			if (array[i]>max) {
				max = array[i];
			}
		}
		range = max-min;
		cout << "Case " << ctr << ": " << min << " " << max << " " << range << endl;
		ctr++;
	}
}
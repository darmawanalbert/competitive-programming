#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>
#include <sstream>
using namespace std;
int main(void) {
	string a;
	int array[50];
	int temp,i,sum;
	while (getline(cin,a)) {
		i=0;
		istringstream iss(a);
		while (iss>> temp) {
			array[i] = temp;
			i++;
		}
		for (int j=0;j<i;j++) {
			sum = 0;
			for (int k=0;k<i;k++) {
				if (k!=j) {
					sum += array[k];
				}
			}
			if (sum==array[j]) {
				cout << sum << endl;
				break;
			}
		}
	}
}
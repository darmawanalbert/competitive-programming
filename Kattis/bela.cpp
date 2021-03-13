#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
int main(void) {
	long long int n,sum;
	char b;
	string input;
	while (cin >> n >> b) {
		sum = 0;
		for (int i=1;i<=4*n;i++) {
			cin >> input;
			if (input[1]==b) {
				switch(input[0]) {
					case 'A' : 
						sum += 11;
					break;
					case 'K' : 
						sum +=4;
					break;
					case 'Q' : 
						sum +=3;
					break;
					case 'J' : 
						sum +=20;
					break;
					case 'T' : 
						sum +=10;
					break;
					case '9' : 
						sum +=14;
					break;
				}
			}
			else {
				switch(input[0]) {
					case 'A' : 
						sum += 11;
					break;
					case 'K' : 
						sum +=4;
					break;
					case 'Q' : 
						sum +=3;
					break;
					case 'J' : 
						sum +=2;
					break;
					case 'T' : 
						sum +=10;
					break;
				}
			}
		}
		cout << sum << endl;
	}
}
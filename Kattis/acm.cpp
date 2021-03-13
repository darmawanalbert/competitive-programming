#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;
int main(void) {
		int array[30];		
		int a,sum,numright;
		char b;
		string c;
		sum = 0;
		numright = 0;
		for (int i=0;i<=29;i++) {
			array[i] = 0;
		}
		while (true) {
			cin >> a;
			if (a==-1) {
				break;
			}
			cin >> b;
			cin >> c;
			if (c == "right") {
				sum = sum + a + array[b-65];
				numright++;
			}
			else {
				array[b-65] += 20;
			}
			
		}
		cout << numright << " " << sum << endl;
}
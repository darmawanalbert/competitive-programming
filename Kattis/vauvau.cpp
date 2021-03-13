#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;
int main(void) {
	int a,b,c,d,p,m,g,ctr;
	while (cin >> a >> b >> c >> d) {
		ctr = 0;
		cin >> p >> m >> g;
		if (p%(a+b)>=1 && p%(a+b)<=a) {
			ctr++;
		}
		if (p%(c+d)>=1 && p%(c+d)<=c) {
			ctr++;
		}
		switch(ctr) {
			case 0:
			cout << "none" << endl;
			break;
			case 1:
			cout << "one" << endl;
			break;
			case 2:
			cout << "both" << endl;
			break;
		}
		ctr = 0;
		if (m%(a+b)>=1 && m%(a+b)<=a) {
			ctr++;
		}
		if (m%(c+d)>=1 && m%(c+d)<=c) {
			ctr++;
		}
		switch(ctr) {
			case 0:
			cout << "none" << endl;
			break;
			case 1:
			cout << "one" << endl;
			break;
			case 2:
			cout << "both" << endl;
			break;
		}
		ctr = 0;
		if (g%(a+b)>=1 && g%(a+b)<=a) {
			ctr++;
		}
		if (g%(c+d)>=1 && g%(c+d)<=c) {
			ctr++;
		}
		switch(ctr) {
			case 0:
			cout << "none" << endl;
			break;
			case 1:
			cout << "one" << endl;
			break;
			case 2:
			cout << "both" << endl;
			break;
		}
		
	}
}
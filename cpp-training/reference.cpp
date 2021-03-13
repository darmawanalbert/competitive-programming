#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int x;
	int &r = x;
	r = 5;
	cout << "r is " << r << endl;
	cout << "x is " << x << endl;
	return 0;
}
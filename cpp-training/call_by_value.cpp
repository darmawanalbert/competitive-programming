#include <iostream>
#include <cstdio>

using namespace std;
// DOES NOT CHANGE!
void swap(int x,int y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a = 1;
	int b = 2;
	cout << "Before swap : " << endl;
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	swap(a,b);
	cout << "After swap : " << endl;
	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
}
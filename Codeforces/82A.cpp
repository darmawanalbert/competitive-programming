#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

string person[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};

int main() {
	int n;
	scanf("%d",&n);
	int prevbound = 0;
	int divisor = 1;
	int bound = 5;
	int current = 5;
	while (n>bound) {
		prevbound = bound;
		current = current*2;
		bound+=current;
		divisor*=2;
	}
	int res = ceil((double) abs(n-prevbound)/divisor);
	cout << person[res-1] << endl;
	
	
}
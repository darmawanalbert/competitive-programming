#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

int main() {
	int n;
	string line;
	scanf("%d",&n);
	int acc = 0;
	for (int i=0;i<n;i++) {
		cin >> line;
		if (line[0]=='+') acc++;
		else if (line[0]=='-') acc--;
		else {
			if (line[1]=='+') acc++;
			else if (line[1]=='-') acc--;
 		}
		
	}
	printf("%d\n",acc);
	return 0;
}
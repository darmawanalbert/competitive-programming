#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	string line;
	cin >> line;
	for (int i=0;i<line.size();i++) {
		switch(line[i]) {
			case 'A':case 'a':
			case 'E':case 'e':
			case 'I':case 'i':
			case 'U':case 'u':
			case 'O':case 'o':
			case 'Y':case 'y':break;
			default:
				printf(".");
				if (line[i]>=65 && line[i]<=90) printf("%c",line[i]+32);
				else printf("%c",line[i]);
			break;
		}
	}
	printf("\n");
	return 0;
}
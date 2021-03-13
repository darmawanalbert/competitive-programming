#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string line;
	int white = 0;
	int black = 0;
	for (int i=0;i<8;i++) {
		cin >> line;
		for (int j=0;j<line.size();j++) {
			switch(line[j]) {
				case 'Q' : white+=9;break;
				case 'R' : white+=5;break;
				case 'B' : white+=3;break;
				case 'N' : white+=3;break;
				case 'P' : white+=1;break;
				case 'q' : black+=9;break;
				case 'r' : black+=5;break;
				case 'b' : black+=3;break;
				case 'n' : black+=3;break;
				case 'p' : black+=1;break;
			}
		}
	}
	if (white>black) printf("White\n");
	else if (white<black) printf("Black\n");
	else printf("Draw\n");
	return 0;
}
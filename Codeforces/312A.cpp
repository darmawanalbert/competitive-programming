#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>

using namespace std;

int main() {
	int n;
	string line;
	scanf("%d",&n);
	getchar();
	while (n--) {
		bool isFreda = false;
		bool isRainbow = false;
		getline(cin,line);
		if (line.size()>=5) {
			if (line.substr(0,5)=="miao.") isRainbow = true;
			if (line.substr(line.size()-5,5)=="lala.") isFreda = true;
		}
		if (isFreda && isRainbow) printf("OMG>.< I don\'t know!\n");
		else if (isFreda && !isRainbow) printf("Freda\'s\n");
		else if (!isFreda && isRainbow) printf("Rainbow\'s\n");
		else printf("OMG>.< I don\'t know!\n");
	}
	return 0;
}
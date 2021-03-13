#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int n;
	string home,line;
	int kiri = 0;
	int kanan = 0;
	scanf("%d",&n);
	cin >> home;
	while (n--) {
		cin >> line;
		if (line.substr(0,3)==home) kiri++;
		else kanan++;
	}
	if (kiri==kanan) printf("home\n");
	else printf("contest\n");
	return 0;
}
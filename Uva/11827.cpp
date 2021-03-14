#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int gcd(int a,int b) {return (b==0)?a:gcd(b,a%b);}

int main() {
	int a[105];
	int n;
	int temp;
	string line;
	scanf("%d",&n);
	getchar();
	while (n--) {
		getline(cin,line);
		istringstream iss(line);
		int ctr = 0;
		while (iss >> temp) {
			a[ctr] = temp;
			ctr++;
		}
		int maks = 0;
		int tmp;
		for (int i=0;i<(ctr-1);i++) {
			for (int j=(i+1);j<ctr;j++) {
				tmp = gcd(a[i],a[j]);
				if (tmp>maks) maks = tmp;
			}
		}
		printf("%d\n",maks);
	}
	return 0;
}
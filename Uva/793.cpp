#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <sstream>
using namespace std;
typedef long long ll;
const int maks = 10000000;
int p[maks+5];

int find(int x) {return (p[x]==x)?x:(find(p[x]));}
void merge(int x,int y) {p[find(y)]=p[find(x)];}

int main() {
	int t,n;
	int x,y;
	string line;
	scanf("%d",&t);
	char c;
	for (int ctr=1;ctr<=t;ctr++) {
		if (ctr>1) printf("\n");
		int conn = 0;
		int unconn = 0;
		scanf("%d",&n);
		for (int i=1;i<=n;i++) p[i] = i;
		getchar();
		while (getline(cin,line)) {
			if (line=="") break;
			istringstream iss(line);
			iss >> c;
			iss >> x >> y;
			if (c=='c') {
				if (find(x)!=find(y)) merge(x,y);
			}
			else if (c=='q') {
				if (find(x)==find(y)) conn++;
				else unconn++;
			}
		}
		printf("%d,%d\n",conn,unconn);
	}
	return 0;
}
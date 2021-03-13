#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#define pb push_back


using namespace std;
typedef long long ll;
const int maks = 1000000;
bool holes[maks+5];

int main() {
	int n,m,k;
	int temp;
	memset(holes,false,sizeof(holes));
	scanf("%d %d %d",&n,&m,&k);
	for (int i=0;i<m;i++) {
		scanf("%d",&temp);
		holes[temp] = true;
	}
	int from,to;
	int pos = 1;
	bool stuck = false;
	if (holes[pos]) stuck = true;
 	for (int i=0;i<k;i++) {
		scanf("%d %d",&from,&to);
		if (!stuck) {
			if (pos==from) pos =to;
			else if (pos==to) pos = from;
			if (holes[pos]) stuck = true;
		} 
	}	
	printf("%d\n",pos);
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
map<int,int> mmap;

int main() {
	int n,k;
	int temp;
	scanf("%d %d",&n,&k);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		mmap[5-temp]++;
	}
	int acc = 0;
	for (int i=k;i<=5;i++) {
		acc+=mmap[i];
	}
	acc/=3;
	printf("%d\n",acc);
	return 0;	
}
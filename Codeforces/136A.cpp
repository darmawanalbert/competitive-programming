#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <utility>
#include <vector>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
using namespace std;
vector< pair<int,int> > vii;
int main() {
	int n,temp;
	vii.clear();
	scanf("%d",&n);
	for (int i=1;i<=n;i++) {
		scanf("%d",&temp);
		vii.pb(mp(temp,i));
	}
	sort(vii.begin(),vii.end());
	for (int i=0;i<vii.size();i++) {
		if (i>0) printf(" ");
		printf("%d",vii[i].ss);
	}
	printf("\n");
	return 0;
}
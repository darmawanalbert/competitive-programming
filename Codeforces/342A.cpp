#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#define pb push_back
using namespace std;
vector<int> a,b,c;
int main() {
	bool toggle = false;
	int n,temp;
	a.clear();
	b.clear();
	c.clear();
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&temp);
		if (temp==1) a.pb(temp);
		else if (temp==2 || temp==3) b.pb(temp);
		else if (temp==4 || temp==6) c.pb(temp);
		else toggle= true;
	}
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	if (a.size()!=n/3 || b.size()!=n/3 || c.size()!=n/3 || toggle) {
		printf("-1\n");
	}
	else {
		for (int i=0;i<a.size();i++) {
			if (b[i]%a[i]!=0 || c[i]%b[i]!=0) {
				toggle = true;
				break;
			}
		}
		if (toggle) printf("-1\n");
		else {
			for (int i=0;i<a.size();i++) {
				printf("%d %d %d\n",a[i],b[i],c[i]);
			}
		}
	}
	return 0;
}
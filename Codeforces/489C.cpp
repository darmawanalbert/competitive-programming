#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;

bool can(int m,int s) {
	return (s>=0 && s<=9*m);
}


int main() {
	int m,s;
	scanf("%d %d",&m,&s);
	string res = "";
	string res2 = "";
	if (m==1) {
		if (s>=0 && s<=9) {
			printf("%d %d\n",s,s);
		}
		else printf("%d %d\n",-1,-1);
	}
	else {
		int sum ;
		if (s>=1 && s<=9*m) {
			sum = s;
			for (int i=0;i<m;i++) {
				for (int dig=0;dig<10;dig++) {
					if (can(m-i-1,sum-dig) && (i>0 || dig>0 || (m==1 && dig==0))) {
						res+=char(48+dig);
						sum-=dig;
						break;
					}
				}
			}
			cout << res << " ";
			sum = s;
			for (int i=0;i<m;i++) {
				for (int dig=9;dig>=0;dig--) {
					if (can(m-i-1,sum-dig) && (i>0 || dig>0 || (m==1 && dig==0))) {
						res2+=char(48+dig);
						sum-=dig;
						break;
					}
				}
			}
			cout << res2 << endl;
		}
		else printf("%d %d\n",-1,-1);
	}
	return 0;
}
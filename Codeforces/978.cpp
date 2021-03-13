#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <set>
using namespace std;
multiset<int> blue;
multiset<int> green;
multiset<int>::iterator hiBlue, hiGreen;
multiset<int>::reverse_iterator it;
int main() {
	bool toggle;
	int t,b,gr,bl,temp;
	int tmp;
	scanf("%d",&t);
	for (int ctr=1;ctr<=t;ctr++) {
		toggle = false;
		if (ctr>1) printf("\n");
		blue.clear();
		green.clear();
		scanf("%d %d %d",&b,&gr,&bl);
		for (int i=0;i<gr;i++) {
			scanf("%d",&temp);
			green.insert(temp);
		}
		for (int i=0;i<bl;i++) {
			scanf("%d",&temp);
			blue.insert(temp);
		}
		while (true) {
			if (blue.size()==0) {
				if (green.size()==0) {
					toggle = true;
					printf("green and blue died\n");
					break;
				}
				else {
					toggle = true;
					printf("green wins\n");
					for (it=green.rbegin();it!=green.rend();++it) cout << *it << endl;
					break;
				}
			}
			else {
				if (green.size()==0) {
					toggle = true;
					printf("blue wins\n");
					for (it=blue.rbegin();it!=blue.rend();++it) cout << *it << endl;
					break;
				}
				else {
					// sejumlah B
					hiBlue = blue.end();
					--hiBlue;
					hiGreen = green.end();
					--hiGreen;
					if ((*hiBlue)>(*hiGreen)) {
						tmp = (*hiBlue)-(*hiGreen);
						blue.erase(hiBlue);
						green.erase(hiGreen);
						blue.insert(tmp);
					}
					else if ((*hiBlue)<(*hiGreen)) {
						tmp = (*hiGreen)-(*hiBlue);
						blue.erase(hiBlue);
						green.erase(hiGreen);
						green.insert(tmp);
					}
					else {
						blue.erase(hiBlue);
						green.erase(hiGreen);
					}
				}
			}
			
		}
		if (!toggle) {
			if (green.size()==0 && blue.size()==0) {
				printf("green and blue died\n");
			}
			else {
				if (green.size()==0) {
					printf("blue wins\n");
					for (it=blue.rbegin();it!=blue.rend();++it) cout << *it << endl;
				}
				else {
					printf("green wins\n");
					for (it=green.rbegin();it!=green.rend();++it) cout << *it << endl;
				}
			}
		}
	} 
	return 0;
}

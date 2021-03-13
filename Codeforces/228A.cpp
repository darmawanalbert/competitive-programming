#include <iostream>
#include <cstdio>
#include <set>

using namespace std;
set<int> sset;
int main() {
	int temp;
	sset.clear();
	for (int i=0;i<4;i++) {
		scanf("%d",&temp);
		sset.insert(temp);
	}
	cout << 4-sset.size() << endl;
}
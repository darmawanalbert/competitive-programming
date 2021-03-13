#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n,t;
	string line;
	scanf("%d %d",&n,&t);
	cin >> line;
	for (int i=0;i<t;i++) {
		for (int j=0;j<line.size()-1;j++) {
			if (line[j]=='B'&&line[j+1]=='G') {
				swap(line[j],line[j+1]);
				j++;
			}
		}
	}
	cout << line << endl;
	return 0;
}
#include <cstdio>
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#include <vector>
#define ff first
#define ss second
#define mp make_pair
#define pb push_back

using namespace std;
typedef long long ll;

int main() {
	char line[55];
	while (true) {
		scanf("%[^\n]%*c",line);
		if (strcmp(line,"#")==0) break;
		if (next_permutation(line,line+strlen(line))) {
			for (int i=0;i<strlen(line);i++) printf("%c",line[i]);
			printf("\n");
		}
		else printf("No Successor\n");
		
	}
	return 0;
}
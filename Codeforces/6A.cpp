#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
using namespace std;
typedef pair<int,int> ii;
int main() {
	int arr[10];
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	bool triangle = false;
	if ((a+b)>c && (a+c)>b && (b+c)>a) triangle = true;
	if ((a+b)>d && (a+d)>b && (b+d)>a) triangle = true;
	if ((a+d)>c && (a+c)>d && (d+c)>a) triangle = true;
	if ((d+b)>c && (d+c)>b && (b+c)>d) triangle = true;
	if (triangle) cout << "TRIANGLE" << endl;
	else {
		bool segment = false;
		arr[0] = a;
		arr[1] = b;
		arr[2] = c;
		arr[3] = d;
		sort(arr,arr+4);
		if (arr[0]+arr[1]==arr[2]) segment = true;
		if (arr[0]+arr[1]==arr[3]) segment = true;
		if (arr[0]+arr[2]==arr[3]) segment = true;
		if (arr[1]+arr[2]==arr[3]) segment = true;
		if (segment) cout << "SEGMENT" << endl;
		else cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}
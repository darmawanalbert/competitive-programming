#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;
const int maks = 100;
int a[maks+5];
int b[maks+5];
int main() {
	int n;
	scanf("%d",&n);
	for (int i=0;i<n;i++) {
		scanf("%d",&a[i]);
		b[i] = a[i];
	}
	int posMin = 0;
	int mini = a[0];
	int posMax = 0;
	int maxi = a[0];
	for (int i=0;i<n;i++) {
		if (a[i]<=mini) {
			mini = a[i];
			posMin = i;
		}
	}
	int acc = 0;
	for (int i=posMin;i<n-1;i++) {
		swap(a[i],a[i+1]);
		acc++;
	}
	for (int i=n-1;i>=0;i--) {
		if (a[i]>=maxi) {
			maxi = a[i];
			posMax = i;
		}
	}
	for (int i=posMax;i>0;i--) {
		swap(a[i],a[i-1]);
		acc++;
	}
	
	//
	 posMin = 0;
	 mini = b[0];
	 posMax = 0;
	 maxi = b[0];
	int acc2 = 0;
		for (int i=n-1;i>=0;i--) {
			if (b[i]>=maxi) {
				maxi = b[i];
				posMax = i;
			}
		}
		for (int i=posMax;i>0;i--) {
			swap(b[i],b[i-1]);
			acc2++;
		}
		for (int i=0;i<n;i++) {
					if (b[i]<=mini) {
						mini = b[i];
						posMin = i;
					}
				}
				for (int i=posMin;i<n-1;i++) {
					swap(b[i],b[i+1]);
					acc2++;
				}
	
	printf("%d\n",min(acc,acc2));
	return 0;
}
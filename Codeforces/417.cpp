#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <map>

using namespace std;
map<string,int> mmap;
string alphabet = "abcdefghijklmnopqrstuvwxyz";
void precompute() {
	string temp;
	char cur,cur1,cur2,cur3,cur4;
	int idx = 1;
	for (int i=0;i<26;i++) {
		string temp = "";
		cur = alphabet[i];
		temp = temp+cur;
		mmap[temp] = idx;
		idx++;
	}
	for (int i=0;i<26;i++) {
		cur = alphabet[i];
		for (int j=i+1;j<26;j++) {
			string temp = "";
			cur1 = alphabet[j];
			temp = temp+cur+cur1;
			mmap[temp] = idx;
			idx++;
		}
	}
	for (int i=0;i<26;i++) {
		cur = alphabet[i];
		for (int j=i+1;j<26;j++) {
			cur1 = alphabet[j];
			for (int k=j+1;k<26;k++) {
				string temp = "";
				cur2 = alphabet[k];
				temp = temp+cur+cur1+cur2;
				mmap[temp] = idx;
				idx++;
			} 
		}
	}
	for (int i=0;i<26;i++) {
		cur = alphabet[i];
		for (int j=i+1;j<26;j++) {
			cur1 = alphabet[j];
			for (int k=j+1;k<26;k++) {
				cur2 = alphabet[k];
				for (int l=k+1;l<26;l++) {
					string temp = "";
					cur3 = alphabet[l];
					temp = temp+cur+cur1+cur2+cur3;
					mmap[temp] = idx;
					idx++;
				}
			} 
		}
	}
	for (int i=0;i<26;i++) {
		cur = alphabet[i];
		for (int j=i+1;j<26;j++) {
			cur1 = alphabet[j];
			for (int k=j+1;k<26;k++) {
				cur2 = alphabet[k];
				for (int l=k+1;l<26;l++) {
					cur3 = alphabet[l];
					for (int m=l+1;m<26;m++) {
						string temp = "";
						cur4 = alphabet[m];
						temp = temp+cur+cur1+cur2+cur3+cur4;
						mmap[temp] = idx;
						idx++;
					}
				}
			} 
		}
	}

}

int main() {
	string line;
	precompute();
	while (cin >> line) {
		cout << mmap[line] << endl;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <queue>
#include <vector>
#include <utility>
#include <map>
#include <sstream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
const int maks = 200;
map<string,int> dist;
vector<string> vec;


int numDif(string a,string b) {
	int tot = 0;
	for (int i=0;i<a.size();i++) {
		if (a[i]!=b[i]) tot++;
	}
	return tot;
}

int main() {
	int tc;
	string s,t;
	string line;
	scanf("%d",&tc);
	getchar();
	for (int ctr=1;ctr<=tc;ctr++) {
		vec.clear();
		while (getline(cin,line)) {
			if (line=="*") break;
			vec.pb(line);
		}
		if (ctr>1) cout << endl;
		while (getline(cin,line)) {
			if (line=="") break;
			dist.clear();
			istringstream iss(line);
			iss >> s >> t;
			dist[s] = 0;
			queue<string> que;
			que.push(s);
			while (!que.empty()) {
				string u = que.front();
				que.pop();
				for (int i=0;i<vec.size();i++) {
					string v = vec[i];
					if (v==u) continue;
					if (v.length()!=u.length()) continue;
					if (numDif(u,v)==1 && dist.find(v)==dist.end()) {
						dist[v] = dist[u]+1;
						que.push(v);
					}
				}
			}
			cout << s << " " << t << " " << dist[t] << endl;
		}
	}
	return 0;
}
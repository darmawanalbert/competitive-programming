#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <sstream>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

using namespace std;
const double PI = acos(-1);
const int INF = 1e9;
const int maks = 300;
vector<int> adj[maks+5];
int dist[maks+5];

int toInt(string a) {
    int ans = 0;
    int mul = 1;
    for (int i=a.size()-1;i>=0;i--) {
        int dig = a[i]-'0';
        ans+=(mul*dig);
        mul*=10;
    }
    return ans;
}


int main() {
    int n;
    int q;
    string line;
    while (scanf("%d",&n)!=EOF) {
        for (int i=0;i<=n;i++) adj[i].clear();
        for (int i=0;i<n;i++) {
            cin >> line;
            string temp = "";
            int kiri;
            int kanan;
            for (int j=0;j<line.size();j++) {
                if (line[j]=='-') {
                    kiri = toInt(temp);
                    temp = "";    
                }
                else if (line[j]==',') {
                    kanan = toInt(temp);
                    temp = "";
                    adj[kiri].pb(kanan);
                }
                else {
                    temp+=line[j];
                }
            }
            if (temp!="") {
                kanan = toInt(temp);
                temp = "";
                adj[kiri].pb(kanan);
            }
        }
        scanf("%d",&q);
        printf("-----\n");
        while (q--) {
				int s,t;
            scanf("%d %d",&s,&t);
            for (int i=1;i<=n;i++) dist[i] = INF;
            dist[s] = 0;
            queue<int> que;
            que.push(s);
            while (!que.empty()) {
                int u = que.front();
                que.pop();
                for (int i=0;i<adj[u].size();i++) {
                    int v = adj[u][i];
                    if (dist[v]==INF) {
                        dist[v] = dist[u]+1;
                        que.push(v);
                    }
                }
            }
			  int pos,cur;
			  int distance = dist[t];
			  if (dist[t]==INF) cout << "connection impossible" << endl;
			  else cout << dist[t] << endl;
				
        }    
    }
    return 0;
}
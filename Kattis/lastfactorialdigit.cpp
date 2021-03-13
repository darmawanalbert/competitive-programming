#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <string>
#include <utility>
#define ff first
#define ss second
#define mp make_pair
typedef long long ll;

using namespace std;

int main() {
    int lastDigit[] = {0, 1, 2, 6, 4, 0, 0, 0, 0, 0, 0};
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << lastDigit[n] << endl;
    }
    return 0;
}
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int n;
    double q,y;
    double sum = 0;
    cin >> n;
    while (n--) {
        cin >> q >> y;
        sum += q*y;
    }
    cout << sum << endl;
    return 0;
}
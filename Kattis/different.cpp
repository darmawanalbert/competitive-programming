#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    long long int a,b;
    while (cin >> a >> b) {
        cout << abs(a-b) << endl;
    }
    return 0;
}
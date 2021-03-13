#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int n;
    int atBat;
    int numerator = 0;
    int denominator = 0;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> atBat;
        if (atBat != -1) {
            numerator += atBat;
            denominator++;
        }
    }
    double result = (double) numerator / denominator;
    cout << result << endl;

    return 0;
}
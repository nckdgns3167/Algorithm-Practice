#include <bits/stdc++.h>
using namespace std;

int fact(int n) {
    int ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= i;
    }
    return ret;
}

int n = 5;
int main() {
    cout << fact(n) << "\n";
    return 0;
}
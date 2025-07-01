/**
 *    author:  shribakb
 *    created: 2025.07.01 16:45:32
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    if (x1 > x2) swap(x1, x2);
    if (x2 > x3) swap(x2, x3);
    if (x1 > x2) swap(x1, x2);

    cout << x3 - x1;
    return 0;
}
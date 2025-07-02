/**
 *    author:  shribakb
 *    created: 2025.07.03 01:52:21
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;


    if (b > a) swap (a, b);
    cout << b << " " << (a - b) / 2;

    return 0;
}
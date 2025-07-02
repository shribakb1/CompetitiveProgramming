/**
 *    author:  shribakb
 *    created: 2025.07.03 00:51:04
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int ml = k * l;
    int toast = ml / nl;
    int limes = c * d;
    int salt = p / np;

    int total = min(toast, limes);
    total = min(total, salt);
    total /= n;
    cout << total;
    return 0;
}
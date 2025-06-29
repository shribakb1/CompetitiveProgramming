/**
 *    author:  shribakb
 *    created: 2025.06.30 01:17:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int bills = 0;

    bills += n / 100;
    n %= 100;

    bills += n / 20;
    n %= 20;

    bills += n / 10;
    n %= 10;

    bills += n / 5;
    n %= 5;

    bills += n;

    cout << bills;
    return 0;
}
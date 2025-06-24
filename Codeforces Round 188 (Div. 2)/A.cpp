/**
 *    author:  shribakb
 *    created: 2025.06.24 17:04:03
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    long long n, k;
    cin >> n >> k;


    long long half = (n + 1) / 2;

    if (k <= half)
    {
        cout << 2 * k - 1;
    }
    else
    {
        cout << 2 * (k - half);
    }

    return 0;
}
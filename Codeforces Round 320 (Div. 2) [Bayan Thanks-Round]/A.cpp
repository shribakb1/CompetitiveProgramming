/**
 *    author:  shribakb
 *    created: 2025.07.13 03:28:03
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    long long count = 0;
    while (x > 1)
    {
        count += x % 2;
        x /= 2;
    }
    
    cout << ++count;

    return 0;
}
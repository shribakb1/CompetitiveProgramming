/**
 *    author:  shribakb
 *    created: 2025.07.09 03:28:59
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;

    cin >> a >> b >> c;

    int ans = 0;
    ans = max (ans, a * b * c);
    ans = max (ans, a + b + c);
    ans = max (ans, (a + b) * c);
    ans = max (ans, a * (b + c));


    cout << ans;
    return 0;
}
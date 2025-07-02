/**
 *    author:  shribakb
 *    created: 2025.07.01 16:53:32
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b) swap (a, b);
        if (b > c) swap (b, c);
        if (a > b) swap (a, b);

        if (a + b == c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}
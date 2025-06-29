/**
 *    author:  shribakb
 *    created: 2025.06.29 19:32:33
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
        int a, b;
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << '\n';
        }
        else
        {
            int rem = a / b;
            cout << ((rem + 1) * b) - a << '\n';
        }
    }
    return 0;
}
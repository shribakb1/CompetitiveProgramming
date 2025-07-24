/**
 *    author:  shribakb
 *    created: 2025.07.24 04:13:50
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a - b == c)
        {
            cout << "-" << endl;
        }
        else
        {
            cout << "+" << endl;
        }
    }
    return 0;
}
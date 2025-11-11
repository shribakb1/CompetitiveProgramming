/**
 *    author:  shribakb
 *    created: 2025.11.10 12:56:57
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
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (a == b && b == c && c == d)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }


    return 0;
}
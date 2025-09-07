/**
 *    author:  shribakb
 *    created: 2025.07.24 04:19:31
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
        int a, b;
        cin >> a >> b;

        if (a > b) swap(a, b);

        int count = (b - a) / 10;
        if ((b - a) % 10)
            count++;

        cout << count << endl;

    }

    return 0;
}
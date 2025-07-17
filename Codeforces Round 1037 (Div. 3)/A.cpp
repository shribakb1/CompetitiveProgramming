/**
 *    author:  shribakb
 *    created: 2025.07.17 17:32:00
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
        int x;
        cin >> x;

        int min = 10;
        while (x > 0)
        {
            if (x % 10 < min)
            {
                min = x % 10;
            }

            x /= 10;
        }

        cout << min << endl;
    }

    return 0;
}
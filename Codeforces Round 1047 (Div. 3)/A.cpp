/**
 *    author:  shribakb
 *    created: 2025.09.07 17:34:24
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int k, x;
        cin >> k >> x;

        while (k > 0)
        {
            x *= 2;
            k--;
        }

        cout << x << endl; 
    }

    return 0;
}
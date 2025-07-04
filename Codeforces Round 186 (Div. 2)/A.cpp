/**
 *    author:  shribakb
 *    created: 2025.07.04 02:11:53
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    if (n > 0)
    {
        cout << n;
    }
    else
    {
        int r = n % 10;

        if (n / 10 > n / 100 * 10 + r)
        {
            cout << n / 10;
        }
        else
        {
            cout << n / 100 * 10 + r;
        }
    }

    return 0;
}
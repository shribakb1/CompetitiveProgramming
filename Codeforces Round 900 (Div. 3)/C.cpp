/**
 *    author:  shribakb
 *    created: 2025.07.13 01:04:51
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
        long long n, k, x;
        cin >> n >> k >> x;

        long long min = (k) * (k + 1) / 2;
        long long max = (k * (2 * n - k + 1)) / 2;

        if (x >= min && x <= max)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
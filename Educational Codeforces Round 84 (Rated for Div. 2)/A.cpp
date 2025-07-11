/**
 *    author:  shribakb
 *    created: 2025.07.11 01:27:40
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        if (k * k > n)
        {
            cout << "NO" << endl;
        }
        else if (n % 2 == 1 && k % 2 == 1)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0 && k % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
    return 0;
}
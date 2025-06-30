/**
 *    author:  shribakb
 *    created: 2025.07.01 02:14:06
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
        long long n;
        cin >> n;

        if (n % 2 == 0)
        {
            cout << (n / 2) - 1 << endl;
        }
        else
        {
            cout << (n / 2) << endl;
        }
    }
    return 0;
}
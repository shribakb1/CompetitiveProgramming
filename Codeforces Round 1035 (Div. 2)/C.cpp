/**
 *    author:  shribakb
 *    created: 2025.07.07 14:59:27
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
        long long n, l, r, k;
        cin >> n >> l >> r >> k;

        if (n % 2 == 1)
        {
            cout << l << endl;
            continue;
        }



        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        long long power_of_two = 1;
        while (power_of_two <= l)
        {
            power_of_two <<= 1;
        }

        if (power_of_two > r)
        {
            cout << -1 << endl;
            continue;
        }

        if (k <= n - 2)
        {
            cout << l << endl;
        }
        else
        {
            cout << power_of_two << endl;
        }
    }

    return 0;
}
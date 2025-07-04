/**
 *    author:  shribakb
 *    created: 2025.07.04 14:41:32
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
        long long n;
        cin >> n;

        for (long long k = 2; ; k++) {
            long long s = (1LL << k) - 1;
            if (s > n) break;
            if (n % s == 0) {
                cout << n / s << endl;
                break;
            }
        }

    }

    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.19 06:30:18
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
        int n, q;
        cin >> n >> q;

        vector<int> a(n), p(n + 1);

        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        p[0] = 0;
        for (int i = 1; i < n + 1; i++)
        {
            p[i] += p[i - 1] + a[i - 1];
        }
        
        while (q--)
        {
            int l, r, k;
            cin >> l >> r >> k;


            if ((sum - (p[r] - p[l - 1]) + (r - l + 1) * k ) % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }

        }
    }

    return 0;
}
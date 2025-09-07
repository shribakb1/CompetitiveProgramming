/**
 *    author:  shribakb
 *    created: 2025.07.14 00:26:34
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
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int g = __gcd(a[n -1], a[0]);

        for (int i = 1; i < n; i++)
        {
            g = __gcd(g, a[i]);
        }

        int ans = 0;
        while (true)
        {
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] == g)
                {
                    cnt++;
                }
            }

            if (cnt == n)
                break;

            ans++;

            int a_0 = a[0];
            for (int i = 0; i < n - 1; i++)
            {
                int temp =  a[i];
                a[i] = __gcd(temp, a[i + 1]);
            }

            a[n - 1] = __gcd(a[n - 1], a_0);
        }

        cout << ans << endl;
    }

    return 0;
}
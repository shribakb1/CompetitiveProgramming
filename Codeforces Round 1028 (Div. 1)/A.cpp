/**
 *    author:  shribakb
 *    created: 2025.07.13 20:13:51
**/

#include <bits/stdc++.h>

using namespace std;


const int M = 5005;
const int INF = 1e9;

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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int g = a[0];

        for(auto it: a) g = __gcd(g, it);

        int cnt = 0;
        for (auto it: a) if (it == g) cnt++;

        if (cnt > 0)
        {
            cout << n - cnt << endl;
            continue;
        }

        vector<int> dp(M, INF);

        for (auto it: a) dp[it] = 0;

        for (int i = M - 1; i >= 0; i--)
        {
            if (dp[i] < INF)
            {
                for (auto it: a)
                {
                    int tmp = __gcd(i, it);
                    dp[tmp] = min(dp[tmp], dp[i] + 1);
                }
            }
        }

        cout << dp[g] + (n - 1) << endl;
    }


    return 0;
}
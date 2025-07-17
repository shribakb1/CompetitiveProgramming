/**
 *    author:  shribakb
 *    created: 2025.07.17 17:39:12
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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        int ans = 0, cnt = 0, break_ = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0 && !break_)
            {
                cnt++;
            }
            else
            {
                break_ = false;
                cnt = 0;
            }

            if (cnt == k)
            {
                ans++;
                cnt = 0;
                break_ = true;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.14 04:02:55
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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> b(m);
        for (int i = 0; i < m; i++) cin >> b[i];

        int i = 0, j = 0;

        bool flag = true;
        vector<int> res;
        while (i + j < n + m)
        {
            if (a[i] == 0 && i < n)
            {
                res.push_back(a[i]);
                i++;
                k++;
            }
            else if (a[i] <= k && i < n)
            {
                res.push_back(a[i]);
                i++;
            }
            else if (b[j] == 0 && j < m)
            {
                res.push_back(b[j]);
                k++;
                j++;
            }
            else if (b[j] <= k && j < m)
            {
                res.push_back(b[j]);
                j++;
            }
            else
            {
                cout << -1 << endl;
                flag = false;
                break;
            }
        }

        if (flag)
        {
            for (int i = 0; i < n + m; i++)
            {
                cout << res[i] << " ";
            }
            cout << endl;
        }

    }

    return 0;
}
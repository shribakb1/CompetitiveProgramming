/**
 *    author:  shribakb
 *    created: 2025.07.24 04:24:29
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
            cin >> a[i];

        sort(a.begin(), a.end());

        bool f = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i + 1] - a[i] > 1)
            {
                f = false;
                break;
            }
        }

        if (!f)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
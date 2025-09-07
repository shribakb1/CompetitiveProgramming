/**
 *    author:  shribakb
 *    created: 2025.07.19 06:53:09
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> a(n - 1);

    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }

    int pos = 1;
    for (int i = 1; i < n; i++)
    {
        if (pos - 1 == t)
        {
            cout << "YES";
            return 0;
        }

        pos += a[i - 1];
    }

    cout << "NO";
    return 0;
}
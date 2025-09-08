/**
 *    author:  shribakb
 *    created: 2025.09.07 17:37:36
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

        vector<int> p(n);

        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cout << n + 1 - p[i] << " ";
        }

        cout << endl;
    }

    return 0;
}
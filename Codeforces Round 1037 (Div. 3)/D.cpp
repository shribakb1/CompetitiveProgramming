/**
 *    author:  shribakb
 *    created: 2025.07.17 18:33:27
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

        vector<vector<int>> a(n, vector<int> (3));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
            }
        }

        sort(a.begin(), a.end(), [](const vector<int>& x, const vector<int>& y) {
            return x[0] < y[0]; 
        });

        int x = k;
        for (int i = 0; i < n; i++)
        {
            if (x >= a[i][0] && x <= a[i][1] && x < a[i][2])
            {
                x = a[i][2];
            }
        }

        cout << x << endl;

    }

    return 0;
}
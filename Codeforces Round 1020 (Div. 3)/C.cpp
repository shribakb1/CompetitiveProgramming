/**
 *    author:  shribakb
 *    created: 2025.06.28 16:47:13
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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if (a[i] + b[i] > k)
            {
                cout << "0";
                break;
            }
        }
    }

    return 0;
}
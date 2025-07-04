/**
 *    author:  shribakb
 *    created: 2025.07.04 12:04:53
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
        int n;
        cin >> n;

        bool flag = false;
        for (int i = 0; 2020 * i <= n; i++)
        {
            for (int j = 0; 2021 * j <= n; j++)
            {
                if (i * 2020 + j * 2021 == n)
                {
                    cout  << "YES" << endl;
                    flag = true;
                }
            }
        }
        if (!flag)
            cout << "NO" << endl;
    }

    return 0;
}
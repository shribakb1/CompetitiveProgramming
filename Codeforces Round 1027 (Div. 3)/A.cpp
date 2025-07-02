/**
 *    author:  shribakb
 *    created: 2025.06.25 08:36:11
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

        string s;
        cin >> s;

        int count_0 = 0;
        int count_1 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count_0++;
            else
                count_1++;
        }

        int un = (n - k * 2) / 2;
        if (count_0 >= un && count_1 >= un && (count_0 - un) % 2 == 0 && (count_1 - un) % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
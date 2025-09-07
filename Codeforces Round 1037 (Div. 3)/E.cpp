/**
 *    author:  shribakb
 *    created: 2025.07.17 18:55:45
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

        vector<int> pi(n);

        
        for (int i = 0; i < n; i++)
        {
            cin >> pi[i];
        }

        vector<int> si(n);
        for (int i = 0; i < n; i++)
        {
            cin >> si[i];
        }

        bool flag = true;
        for (int i = 0; i < n - 1; i++)
        {
            if (pi[i] % pi[i + 1] == 0)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }

        for (int i = n - 1; i >= 1; i--)
        {
            if (si[i] % si[i - 1] == 0)
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
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
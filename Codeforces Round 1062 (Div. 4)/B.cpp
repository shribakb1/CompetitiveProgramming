/**
 *    author:  shribakb
 *    created: 2025.11.10 13:02:44
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

        string s, t;
        cin >> s >> t;

        std::sort(s.begin(), s.end());
        std::sort(t.begin(), t.end());

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != t[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

    }

    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.14 03:30:32
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
        string s;
        cin >> s;

        char a = 'a';
        a += s.size() - 1;

        bool flag = true;
        for (int i = 0, k = s.size() - 1; i <= k; )
        {
            if (s[i] == a)
            {
                i++;
            }
            else if (s[k] == a)
            {
                k--;
            }
            else
            {
                cout << "no" << endl;
                flag = false;
                break;
            }

            a--;
        }

        if (flag)
        {
            cout << "yes" << endl;
        }
    }

    return 0;
}
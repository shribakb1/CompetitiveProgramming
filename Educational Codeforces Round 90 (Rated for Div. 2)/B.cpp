/**
 *    author:  shribakb
 *    created: 2025.07.17 05:14:34
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

        int cnt = 0, cnt_1 = 0, cnt_0 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                if (cnt_0 > 0)
                {
                    cnt_0--;
                    cnt++;
                }
                else
                {
                    cnt_1++;
                }
            }
            else
            {
                if (cnt_1 > 0)
                {
                    cnt_1--;
                    cnt++;
                }
                else
                {
                    cnt_0++;
                }
            }
        }

        if (cnt % 2 == 1)
        {
            cout << "DA" << endl;
        }
        else
        {
            cout << "NET" << endl;
        }
    }

    return 0;
}
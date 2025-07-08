/**
 *    author:  shribakb
 *    created: 2025.07.09 00:52:28
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

        int k;
        cin >> k;

        string s;
        cin >> s;

        int chars[26] = {0};

        for (int i = 0; i < s.size(); i++)
        {
            chars[s[i] - 'a']++;
        }

        int sum = 0;

        for (int i = 0; i < 26; i++)
        {
            if (chars[i] % 2)
            {
                sum++;
            }
        }

        if (sum - k > 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }


    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.24 04:37:19
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == '.')
        {
            ans += "0";
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            ans += "1";
            i++;
        }
        else
        {
            ans += "2";
            i++;
        }
        if (s.size() - 1 == i + 1 && s[s.size() - 1] == '.')
        ans += "0";
    }


    cout << ans;


    return 0;
}
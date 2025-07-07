/**
 *    author:  shribakb
 *    created: 2025.07.07 12:22:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    string h = "hello";
    int pos = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == h[pos])
        {
            pos++;
        }
    }

    if (pos == h.size())
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
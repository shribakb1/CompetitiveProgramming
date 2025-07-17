/**
 *    author:  shribakb
 *    created: 2025.07.17 14:42:59
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
        int n, a, b;
        cin >> n >> a >> b;

        string s = "";
        char ch = 'a';
        for (int i = 0; i < b; i++)
        {
            s += ch + '\0';
            ch++;
        }
        
        ch--;
        for (int i = b; i < a; i++)
        {
            s += ch;
        }

        for (int i = 0; i < n; i++)
        {
            cout << s[i % s.size()];
        }

        cout << endl;

    }

    return 0;
}
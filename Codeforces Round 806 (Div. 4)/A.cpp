/**
 *    author:  shribakb
 *    created: 2025.07.03 01:17:34
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
        string str;
        cin >> str;

        for (int i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }

        if (str == "yes")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
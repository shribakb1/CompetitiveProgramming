/**
 *    author:  shribakb
 *    created: 2025.07.11 08:16:48
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int m;
    cin >> m;

    vector<int> prefix(s.size(), 0);
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
            prefix[i] = prefix[i - 1] + 1;
        else
            prefix[i] = prefix[i - 1];
    }

    while (m--)

    {
        int sum = 0;
        int l, r;
        cin >> l >> r;

        cout << prefix[r - 1] - prefix[l - 1] << endl;
    }

    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.17 05:31:06
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<string> s(n);

    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int cnt = 0, index = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[0])
        {
            cnt++;
        }
        else
        {
            index = i;
        }
    }

    if (cnt >= n / 2 || cnt == n)
        cout << s[0] << endl;
    else
        cout << s[index] << endl;

    return 0;
}
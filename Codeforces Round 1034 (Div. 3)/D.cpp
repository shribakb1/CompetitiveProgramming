/**
 *    author:  shribakb
 *    created: 2025.07.01 18:59:05
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
        int n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
                count++;
        }

        if (count <= k || n / 2 < k)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}
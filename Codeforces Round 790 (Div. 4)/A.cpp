/**
 *    author:  shribakb
 *    created: 2025.07.24 03:56:23
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

        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0, j = 5; i < 3; i++, j--)
        {
            sum1 += (int)s[i];
            sum2 += (int)s[j];
        }

        if (sum1 == sum2)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }

        
    }

    return 0;
}
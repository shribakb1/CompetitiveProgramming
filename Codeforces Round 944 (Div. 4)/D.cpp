/**
 *    author:  shribakb
 *    created: 2025.07.05 14:08:12
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

        int count = 1;
        for (int i = 0; i < str.size() - 1; i++)
        {
            if (str[i] != str[i + 1])
            {
                count++;
            }
        }

        if (count == 2 && str[0] == '0' || count > 2)
        {
            count--;
        }

        cout << count << endl;
    }

    return 0;
}
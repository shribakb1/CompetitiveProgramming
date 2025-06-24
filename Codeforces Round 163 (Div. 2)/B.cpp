/**
 *    author:  shribakb
 *    created: 2025.06.24 13:50:03
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, t;
    cin >> n >> t;

    string str;
    cin >> str;

    for (int i = 0; i < t; i++)
    {
        for(int j = 0; j < n - 1; j++)
        {
            if (str[j] == 'B' && str[j + 1] == 'G')
            {
                str[j] = 'G';
                str[j + 1] = 'B';

                j++;
            }
        }
    }

    cout << str;
    return 0;
}
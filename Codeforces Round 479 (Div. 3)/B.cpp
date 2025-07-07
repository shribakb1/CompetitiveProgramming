/**
 *    author:  shribakb
 *    created: 2025.07.08 01:19:19
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    string str;
    cin >> str;

    int count = 0, max = 0;

    string s = "";

    for (int i = 0; i < n - 1; i++)
    {
        count = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (str[i] == str[j] && str[i + 1] ==  str[j + 1])
            {
                count++;
            }

            if (count > max)
            {
                s = string() + str[i] + str[i + 1];
                max = count;
            }
        }
    }

    cout << s;

    return 0;
}

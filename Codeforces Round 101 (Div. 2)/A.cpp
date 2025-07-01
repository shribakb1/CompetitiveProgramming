/**
 *    author:  shribakb
 *    created: 2025.07.01 02:55:11
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str1, str2;
    cin >> str1 >> str2;

    string str;
    cin >> str;

    int count1[26] = {0};
    int count2[26] = {0};

    for (int i = 0; i < str1.size(); i++)
    {
        count1[str1[i] - 'A']++;
    }

    for (int i = 0; i < str2.size(); i++)
    {
        count1[str2[i] - 'A']++;
    }

    for (int i = 0; i < str.size(); i++)
    {
        count2[str[i] - 'A']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (count1[i] != count2[i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
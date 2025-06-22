/**
 *    author:  shribakb
 *    created: 2025.06.22 16:29:56
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    int lower = 0;
    int upper = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (isupper(str[i]))
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }

    if (upper > lower)
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = toupper(str[i]);
        }
    }
    else
    {
        for (int i = 0; i < str.length(); i++)
        {
            str[i] = tolower(str[i]);
        }
    }

    cout << str;
    return 0;
}
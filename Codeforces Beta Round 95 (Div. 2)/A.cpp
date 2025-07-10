/**
 *    author:  shribakb
 *    created: 2025.07.10 14:14:28
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;

    int count_upper = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
            count_upper++;
    }

    if (count_upper == s.size())
    {
        for (int i = 0; i < s.size(); i++)
             cout << (char)tolower(s[i]);
    }   
    else if (count_upper == s.size() - 1 && islower(s[0]))
    {
        cout << (char)toupper(s[0]);
        for (int i = 1; i < s.size(); i++)
             cout << (char)tolower(s[i]);
    }
    else
    {
        cout << s;
    }

    return 0;
}
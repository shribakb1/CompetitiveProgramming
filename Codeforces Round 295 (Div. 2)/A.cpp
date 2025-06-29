/**
 *    author:  shribakb
 *    created: 2025.06.29 19:40:48
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
    set<char> ch;

    for(int i = 0; i < n; i++)
    {
        ch.insert(tolower(str[i]));
    }

    if (ch.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
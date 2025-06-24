/**
 *    author:  shribakb
 *    created: 2025.06.24 19:22:20
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == 'H' || str[i] =='Q' || str[i] == '9')
        {
            cout << "YES";
            break;
        }

        if (i + 1 == str.size())
        {
            cout << "NO";
        }

    }
    return 0;
}
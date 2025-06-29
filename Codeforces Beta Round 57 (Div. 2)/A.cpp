/**
 *    author:  shribakb
 *    created: 2025.06.29 19:17:57
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    string str1;
    string str2;

    cin >> str1 >> str2;

    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] ^ str2[i])
        {
            cout << 1;
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}
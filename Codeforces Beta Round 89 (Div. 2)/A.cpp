/**
 *    author:  shribakb
 *    created: 2025.07.06 16:58:40
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); i++)
    {
        char ch = tolower(str[i]);
        if ( ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || 
                ch == 'u' || ch == 'i')
        {
            continue;
        }
        else
        {
            cout << '.' << ch;
        }
    }

    return 0;
}
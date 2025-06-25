/**
 *    author:  shribakb
 *    created: 2025.06.25 04:00:22
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    cin >> str;

    int count = 0;
    for (int i = 0; i < str.size(); )
    {
        if (i < str.size() - 2 && str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            if (count != 0)
            {
                cout << str.substr(i - count, count) << " ";
                count = 0;
            }
            i+=3;
        }
        else{
            count++;
            i++;
            if (i == str.size())
            {
                cout << str.substr(i - count, count);
            }
        }
    }
    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.10 13:49:57
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int count = 0;
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << (count < 0) ? -count : count;

    return 0;
}
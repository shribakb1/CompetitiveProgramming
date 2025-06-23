/**
 *    author:  shribakb
 *    created: 2025.06.23 06:05:24
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    string str1, str2;


    cin >> str1 >> str2;

        if (str1.length() != str2.length())
    {
        cout << "NO";
        return 0;
    }

    
    int n = str1.length();
    for (int i = 0; i < n; i++)
    
{
      if (str1[i] != str2[n - i - 1])
        {
            cout << "NO";
            break;
        }

        if (i + 1 == n)
        {
            cout << "YES";
        }
}
    return 0;
}
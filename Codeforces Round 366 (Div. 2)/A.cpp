/**
 *    author:  shribakb
 *    created: 2025.06.29 19:23:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << "I love ";
        }
        else
        {
            cout << "I hate ";
        }

        if (i == n)
        {
            cout << "it"
        }
        else
        {
            cout << "that "
        }
    }
    return 0;
}
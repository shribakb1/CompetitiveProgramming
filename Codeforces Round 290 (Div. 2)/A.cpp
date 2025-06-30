/**
 *    author:  shribakb
 *    created: 2025.07.01 02:27:25
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 != 0)
                cout << "#";
            else if (i % 4 == 0 && j == 1)
                cout << "#";
            else if (i % 2 == 0 && i % 4 != 0 && j == m)
                cout << "#";
            else
                cout << ".";

        }
        cout << endl;
    }
    return 0;
}
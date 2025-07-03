/**
 *    author:  shribakb
 *    created: 2025.07.03 09:46:09
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<string> str(n);

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }


    int min_row = n - 1, max_row = 0;
    int min_col = m - 1, max_col = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (str[i][j] == 'B')
            {
                min_row = min(min_row, i);
                max_row = max(max_row, i);
                min_col = min(min_col, j);
                max_col = max(max_col, j);
            }
        }
    }

    cout << (min_row + max_row) / 2 + 1 << " " << (min_col + max_col) / 2 + 1;


    return 0;
}
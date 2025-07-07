/**
 *    author:  shribakb
 *    created: 2025.07.07 03:43:13
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int>(3));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[j][i];
        }

        if (sum == 0)
        {
            continue;
        }
        else
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}
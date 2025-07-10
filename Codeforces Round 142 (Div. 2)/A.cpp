/**
 *    author:  shribakb
 *    created: 2025.07.11 01:11:36
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int s, n;
    cin >> s >> n;


    vector<vector<int>> a(n, vector<int>(2));

    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0] >> a[i][1];
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++)
    {
        if (a[i][0] >= s)
        {
            cout << "NO";
            return 0;
        }

        s += a[i][1];
    }

    cout << "YES";
    return 0;
}
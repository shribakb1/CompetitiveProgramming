/**
 *    author:  shribakb
 *    created: 2025.07.13 21:56:28
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cout << min (a[n - 2] - a[0], a[n - 1] - a[1]);

    return 0;
}
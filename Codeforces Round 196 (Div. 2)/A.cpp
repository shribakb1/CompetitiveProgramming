/**
 *    author:  shribakb
 *    created: 2025.07.03 17:14:04
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    vector<int> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int min_diff = arr[n - 1] - arr[0];

    for (int i = 0; i <= m - n; i++)
    {
        if(arr[i + n - 1] - arr[i] < min_diff)
        {
            min_diff = arr[i + n - 1] - arr[i];
        }
    }

    cout << min_diff;
    return 0;
}
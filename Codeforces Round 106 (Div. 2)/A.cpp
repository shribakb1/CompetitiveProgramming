/**
 *    author:  shribakb
 *    created: 2025.07.12 22:18:37
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k;
    cin >> k;

    int n = 12;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int sum = 0, count = 0;
    for (int i = n - 1; i >= 0; i--, count++)
    {
        if (sum >= k)
        {
            cout << count;
            return 0;
        }
        sum += arr[i];
    }

    if (sum >= k)
    cout << count;
    else
    cout << -1;

    return 0;
}
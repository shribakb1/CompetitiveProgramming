/**
 *    author:  shribakb
 *    created: 2025.06.22 19:37:22
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
            sum += arr[i];
        }

        while (sum % n != 0)
        {
            arr[0] += 1;
            sum += 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
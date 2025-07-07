/**
 *    author:  shribakb
 *    created: 2025.07.07 11:55:58
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
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int ans = 0, cur = 1;

        for (int i = 1; i < n; i++)
        {
            if(arr[i] <= arr[i - 1] + k)
            {
                cur++;
            }
            else
            {
                ans = max(ans, cur);
                cur = 1;
            }
        }


        ans = max(ans, cur);
        cout << n - ans << endl;
    }
    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.01 19:09:44
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

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<int> pre_min(n);
        vector<int> suff_max(n);

        pre_min[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            pre_min[i] = min(pre_min[i - 1], arr[i]);
        }
        

        suff_max[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suff_max[i] = max(suff_max[i + 1], arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > pre_min[i] && arr[i] < suff_max[i])
                cout << '0';
            else
                cout << '1';
        }

        cout << endl;

    }
    return 0;
}
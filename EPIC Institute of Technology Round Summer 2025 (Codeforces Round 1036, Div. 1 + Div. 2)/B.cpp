/**
 *    author:  shribakb
 *    created: 2025.07.06 23:34:03
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (arr[0] >= arr[1])
        {
            cout << arr[0] + arr[1] << endl;
        }
        else
        {
            cout << arr[0] * 2 << endl;
        }

    }

    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.06 17:12:56
**/
#include <bits/stdc++.h>
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int m;
        cin >> m;

        int index = upper_bound(arr.begin(), arr.end(), m) - arr.begin();

        cout << index << "\n";
    }

    return 0;
}
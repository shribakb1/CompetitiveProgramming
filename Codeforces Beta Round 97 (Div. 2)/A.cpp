/**
 *    author:  shribakb
 *    created: 2025.06.29 18:45:41
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

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        p[arr[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.06.24 14:05:16
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<string> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 1;

    for (int i = 1; i < n; i++)
    {
        if(arr[i - 1][1] != arr[i][1])
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
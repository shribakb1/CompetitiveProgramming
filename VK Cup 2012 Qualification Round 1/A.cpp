/**
 *    author:  shribakb
 *    created: 2025.07.05 01:15:27
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && i < k)
        {
            count++;
        }
        else if (arr[i] > 0 && arr[i] == arr[k - 1])
        {
            count++;
        }
    }
    
    cout << count;
    return 0;
}
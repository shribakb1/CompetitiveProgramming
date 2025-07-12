/**
 *    author:  shribakb
 *    created: 2025.07.12 23:27:15
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

    long long sum = arr[0] - 1;

    for (int i = 1; i < m; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            sum += n - arr[i - 1];
            sum += arr[i];
        }
        else if  (arr[i] > arr[i - 1])
        {
            sum += arr[i] - arr[i - 1];
        }
    }

    cout << sum;

    return 0;
}
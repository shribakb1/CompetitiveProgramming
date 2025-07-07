/**
 *    author:  shribakb
 *    created: 2025.07.07 12:42:31
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<vector<int>> arr(n, vector<int> (2));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }

    sort(arr.begin(), arr.end(), [](const vector<int>& x, const vector<int>& y) {
        return x[0] < y[0]; 
    });

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i][1] > arr[i + 1][1] && arr[i][0] < arr[i + 1][0])
        {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";
    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.06.24 14:22:19
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

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum_steal = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum_steal += arr[i];
        count++;
        int sum_remaining = 0;
        for (int j = 0; j < i; j++)
        {
            sum_remaining += arr[j];
        }

        if (sum_steal > sum_remaining)
        {
            break;
        }
    }

    cout << count;

    return 0;
}
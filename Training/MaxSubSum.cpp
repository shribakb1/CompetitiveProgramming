/**
 *    author:  shribakb
 *    created: 2025.07.21 15:57:43
**/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long max_sum = 0;

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            if (sum > max_sum)
            {
                max_sum = sum;
            }

            sum += a[j];
        }
    }

    cout << max_sum;

    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.05 17:46:28
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
        long long n;
        cin >> n;

        vector<long long> p(2), q(2);
        cin >> p[0] >> p[1] >> q[0] >> q[1];

        long long sum = 0;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr.begin(), arr.end());

        long long d2 = (p[0] - q[0]) * (p[0] - q[0]) + (p[1] - q[1]) * (p[1] - q[1]);

        long long R = sum;
        long long L = max(0LL, 2 * arr.back() - sum);


        if (L * L <= d2 && d2 <= R * R)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
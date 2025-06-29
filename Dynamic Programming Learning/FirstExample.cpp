/**
 *    author:  shribakb
 *    created: 2025.06.29 17:06:03
**/
#include <bits/stdc++.h>
using namespace std;

int nSum (int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1] + i;
    }

    return dp[n];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;

    cout << nSum(n);
    return 0;
}
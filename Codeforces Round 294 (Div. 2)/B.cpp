/**
 *    author:  shribakb
 *    created: 2025.07.12 23:58:23
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);

    int sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
        
    }

    vector<int> b(n - 1);

    int sum2 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }

    vector<int> c(n - 2);

    int sum3 = 0;
    for (int i = 0; i < n - 2; i++)
    {
        cin >> c[i];
        sum3 += c[i];
    }

    cout << sum1 - sum2 << " " << sum2 - sum3;

    return 0;
}
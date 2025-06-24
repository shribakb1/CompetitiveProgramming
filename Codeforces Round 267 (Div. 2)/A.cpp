/**
 *    author:  shribakb
 *    created: 2025.06.24 14:02:26
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;

        if (p <= q - 2)
        {
            count++;
        }
    }

    cout << count;
    return 0;
}
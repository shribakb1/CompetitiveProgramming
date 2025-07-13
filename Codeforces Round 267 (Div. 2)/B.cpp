/**
 *    author:  shribakb
 *    created: 2025.07.13 03:40:21
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> x(m);
    for (int i = 0; i < m; i++)
        cin >> x[i];

    int fedir;
    cin >> fedir;

    int count_friend = 0;
    for (int i = 0; i < m; i++) {
        int hamming_distance = __builtin_popcount(x[i] ^ fedir);
        if (hamming_distance <= k)
            count_friend++;
    }

    cout << count_friend << "\n";
    return 0;
}

/**
 *    author:  shribakb
 *    created: 2025.07.17 17:45:03
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> h(n);
        set<int> s;

        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }

        int pos = h[k - 1];
        for (auto x : h)
        {  
            if (x >= pos)
                s.insert(x);
        }

        bool flag = true;

        int prev = pos;

        for (auto &x : s)
        {
            if (x - prev > pos) flag = false;
            prev = x;
        }


        cout << (flag ? "YES" : "NO") << '\n';
    }

    return 0;
}

/**
 *    author:  shribakb
 *    created: 2025.06.22 16:38:55
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
        int l, r, d, u;
        cin >> l >> r >> d >> u;

        if (l == r && r == d && d == u)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
    return 0;
}
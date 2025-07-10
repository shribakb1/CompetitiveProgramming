/**
 *    author:  shribakb
 *    created: 2025.07.10 14:38:32
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    set<int> l;
    vector<int> a(n), count(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for(int i = n - 1; i >= 0; i--)
    {
        l.insert(a[i]);
        count[i] = l.size();
    }

    for (int i = 0; i < m; i++)
    {
        int l;
        cin >> l;

        cout << count[l - 1] << endl;
    }

    return 0;
}
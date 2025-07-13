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
    {
        cin >> x[i];
    }

    int fedir;
    cin >> fedir;

    int count_friend = m;
    for (int i = 0; i < m; i++)
    {
        int copy_fedir = fedir;
        int count_differ = 0;
        for (int bit = 0; bit < n; bit++)
        {
            if ((x[i] % 2) != (copy_fedir % 2))
                count_differ++;

            x[i] /= 2;
            copy_fedir /= 2;
        }
        if (count_differ > k)
            count_friend--;
    }


    cout << count_friend;

    return 0;
}
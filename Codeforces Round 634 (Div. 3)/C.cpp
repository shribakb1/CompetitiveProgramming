/**
 *    author:  shribakb
 *    created: 2025.07.17 05:40:11
**/

#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        set<int> first;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            first.insert(a[i]);
        }

        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }

        sort(a.begin(), a.end());

        int cnt = 1, max_cnt = 1;;

        for (int j = 1; j < n; j++)
        {

            if (a[j] == a[j - 1])
            {
                cnt++;
            }
            else
            {
                if (cnt > max_cnt)
                {
                    max_cnt = cnt;
                }
                cnt = 1;
            }
        }

        if (cnt > max_cnt)
        {
            max_cnt = cnt;
        }

        if (first.size() == max_cnt)
            cout << max_cnt - 1 << endl;
        else if (first.size() > max_cnt)
            cout << max_cnt << endl;
        else 
            cout << first.size() << endl;
    }

    return 0;
}
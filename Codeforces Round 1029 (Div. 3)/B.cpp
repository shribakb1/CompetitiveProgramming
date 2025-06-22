    /**
     *    author:  shribakb
     *    created: 2025.06.22 16:23:09
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
            int n;
            cin >> n;
            for (int i = 2; i <= n; i++)
            {
                cout << i << " ";
            }

            cout << 1 << '\n';
        }

        return 0;
    }
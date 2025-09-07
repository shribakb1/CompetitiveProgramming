/**
 *    author:  shribakb
 *    created: 2025.08.27 13:19:48
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
        long long n;
        cin >> n;

        vector<long long> ans;

        long long cur = 10;
        while (cur + 1 <= n)
        {
            if (n % (cur + 1) == 0) ans.push_back(n / (cur + 1));
            cur *= 10;
        }

        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;

        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
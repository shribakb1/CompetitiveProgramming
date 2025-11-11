/**
 *    author:  shribakb
 *    created: 2025.11.10 13:07:32
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

        int count_even = 0, count_odd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (a[i] % 2 == 0)
                count_even++;
            else
                count_odd++;
        }

        if (count_even > 0 && count_odd > 0)
            sort(a.begin(), a.end());
        
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        
        cout << endl;
    }

    return 0;
}
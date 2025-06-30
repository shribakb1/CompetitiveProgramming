/**
 *    author:  shribakb
 *    created: 2025.06.30 15:52:40
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> home(n);
    vector<int> guest(n);

    for (int i = 0; i < n; i++)
    {
        cin >> home[i];
        cin >> guest[i];
    }

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (guest[i] == home[j])
                count++;
        }
    }

    cout << count;
    return 0;
}
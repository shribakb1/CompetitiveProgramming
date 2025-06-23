/**
 *    author:  shribakb
 *    created: 2025.06.23 06:23:13
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int capacity = 0;
    int max_capacity = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        capacity -= a;
        capacity += b;

        if (capacity > max_capacity)
        {
            max_capacity = capacity;
        }
    }

    cout << max_capacity;
    return 0;
}
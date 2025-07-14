/**
 *    author:  shribakb
 *    created: 2025.07.14 03:06:31
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
        int x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

        int shortest = abs(x2 - x1) + abs(y2 - y1);

        if (x1 == x2 && x2 == x3 && min(y2, y1) < y3 && y3 < max(y2, y1) ||
            y1 == y2 && y2 == y3 && min(x2, x1) < x3 && x3 < max(x2, x1))
        {
            shortest += 2;
        }

        cout << shortest << " ";
    }

    return 0;
}
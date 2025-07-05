/**
 *    author:  shribakb
 *    created: 2025.07.05 14:14:13
**/
#include <bits/stdc++.h>
using namespace std;

bool ordered(int a, int b, int x)
{
    if (a < b)
    {
        return x > a && x < b;
    }
    else
    {
        return x > a || x < b;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        cout << ((ordered(a, b, c) ^ ordered(a, b, d)) ? "YES" : "NO") << '\n';
    }

    return 0;
}
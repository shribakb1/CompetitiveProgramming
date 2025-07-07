/**
 *    author:  shribakb
 *    created: 2025.07.07 03:30:12
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;

    int i = 0, count = 0;;
    while (n > 0)
    {
        n--;
        i++;
        if (i == m)
        {
            n += 1;
            i = 0;
        }
        count++;
    }

    cout << count;

    return 0;
}
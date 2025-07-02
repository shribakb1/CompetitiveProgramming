/**
 *    author:  shribakb
 *    created: 2025.07.03 01:20:29
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int k, r;
    cin >> k >> r;

    int count = 1;
    for (int i = 1; i < 11; i++)
    {
        if (k * i % 10 == 0 || k * i % 10 == r)
        {
            cout << count;
            return 0;
        }

        count++;
    }
    cout << 0;
    return 0;
}
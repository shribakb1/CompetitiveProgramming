/**
 *    author:  shribakb
 *    created: 2025.07.01 17:11:59
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, k;
    cin >> n >> k;

    int minutes = 240 - k;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if ((minutes - i * 5) >= 0)
        {
            count++;
            minutes -= i * 5;
        }
    }

    cout << count;
    return 0;
}
/**
 *    author:  shribakb
 *    created: 2025.07.01 17:28:06
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
        if (n % 4 == 0)
            cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
    return 0;
}
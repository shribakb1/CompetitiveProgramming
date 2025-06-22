/**
 *    author:  shribakb
 *    created: 2025.06.22 16:43:07
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

        if ((n % 4) == 0)
        {
            cout << "yes" << endl;
        }
        else 
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
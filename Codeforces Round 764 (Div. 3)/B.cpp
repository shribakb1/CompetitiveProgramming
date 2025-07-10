/**
 *    author:  shribakb
 *    created: 2025.07.11 00:47:24
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
        int a, b, c;
        cin >> a >> b >> c;

        if (2 * b == a + c)
        {
            cout << "YES" << endl;
        }
        else
        {
            if ((2 * b - c) % a == 0 && (2 * b - c) / a > 0) 
            {
                cout << "YES" << endl;
            }
            else if ((a + c) % (2 * b) == 0 && (a + c) / (2 * b) > 0)
            {
                cout << "YES" << endl;
            }
            else if ((2 * b - a) % c == 0 && (2 * b - a) / c > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }

            
        }

        // a + c = 2b
    }

    return 0;
}
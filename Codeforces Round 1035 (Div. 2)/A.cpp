/**
 *    author:  shribakb
 *    created: 2025.07.05 17:34:17
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
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        if (a > b && a % 2 == 0 || a - b >= 2)
        {
            cout << -1 << endl;
        }  
        else if (a - b == 1)
        {
            cout << y << endl;
        }
        else
        {
            int count = 0;
            while (a != b)
            {
                if(a % 2 == 0 && y < x)
                {
                    count += y;
                }
                else
                {
                    count += x;
                }
                a += 1;
            }
            cout << count << endl;
        }

    }

    return 0;
}
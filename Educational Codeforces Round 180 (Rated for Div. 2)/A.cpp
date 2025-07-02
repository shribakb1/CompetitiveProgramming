/**
 *    author:  shribakb
 *    created: 2025.06.23 17:36:09
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
        int a, x, y;
        cin >> a >> x >> y;


        if (x > y)
        {
            int temp = y;
            y = x;
            x = temp;
        }   


        if ((y - x) > 1 && (a > x && a < y))
        {
            cout << "NO" << endl;
        } 
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
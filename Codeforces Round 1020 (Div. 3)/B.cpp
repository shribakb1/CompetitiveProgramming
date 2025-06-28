/**
 *    author:  shribakb
 *    created: 2025.06.28 15:28:56
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
        int n, x;
        cin >> n >> x;

        if (n == 1)
            cout << "0" << '\n';
        else{

            for (int i = 0; i < x; i++)
                cout << i << " ";

            for (int i = n - 1; i >= x; i--)
            {
                cout << i << " ";
            }
            cout << '\n';
        }

    }


    return 0;
}
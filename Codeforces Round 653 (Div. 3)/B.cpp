/**
 *    author:  shribakb
 *    created: 2025.07.04 11:25:31
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
        long long n;
        cin >> n;
         
        int count2 = 0;
        int count3 = 0;

        while (n % 2 == 0) {
            n /= 2;
            count2++;
        }
        while (n % 3 == 0) {
            n /= 3;
            count3++;
        }


        if (n == 1 && count2 <= count3) {
            cout << count3 + count3 - count2 << endl;
            continue;
        }
        
        cout << -1 << endl;

    }

    return 0;
}
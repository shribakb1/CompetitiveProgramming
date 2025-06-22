/**
 *    author:  shribakb
 *    created: 2025.06.22 17:12:07
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;

    long count_lucky = 0;
    while (n > 0)
    {
        if (n % 10 == 7 || n % 10 == 4)
        {
            count_lucky++;
        }

        n /= 10;
    }

    if (count_lucky == 0)
    {
        cout << "NO";
        return 0;
    }
    bool flag = true;
    while (count_lucky > 0)
    {
        if ((count_lucky % 10) == 7  || (count_lucky % 10) == 4)
        {
            count_lucky /= 10;
            continue;
        }
        else
        {
            cout << "NO";
            flag = false;
            break;
        }
    }

    if (flag)
    {
        cout << "YES";
    }
    return 0;
}
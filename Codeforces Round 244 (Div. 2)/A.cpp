/**
 *    author:  shribakb
 *    created: 2025.07.01 16:57:13
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    int count = 0;
    int count_hired = 0;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        if (value < 0)
        {
            if (count_hired > 0)
                count_hired--;
            else
                count++;
        }
        else
        {
            count_hired += value;
        }
    }

    cout << count;
    return 0;
}
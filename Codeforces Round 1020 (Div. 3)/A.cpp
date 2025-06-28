/**
 *    author:  shribakb
 *    created: 2025.06.28 15:25:26
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

        string str;
        cin >> str;

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
                count += n - 1;
            else
            {
                count++;
            }
        }

        std::cout << count << "\n";
    }

    return 0;
}
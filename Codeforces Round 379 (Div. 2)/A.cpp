/**
 *    author:  shribakb
 *    created: 2025.06.23 06:01:02
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    std::string str;
    cin >> str;

    int count_A = 0;
    int count_B = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
            count_A++;
        else
            count_B++;
    }

    if (count_A > count_B)
        cout << "Anton";
    else if (count_A < count_B)
        cout << "Danik";
    else
        cout << "Friendship";

    return 0;
}
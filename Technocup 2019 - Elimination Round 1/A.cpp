/**
 *    author:  shribakb
 *    created: 2025.06.24 13:37:54
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cout << "HARD";
            flag = 1;
            break;
        }
    }

    if (!flag)
    {
        cout << "EASY";
    }
    return 0;
}
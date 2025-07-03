/**
 *    author:  shribakb
 *    created: 2025.07.03 09:31:17
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<int> s_arr(arr.begin(), arr.end());

    if (s_arr.size() > 1)
    {
        auto it = s_arr.begin();
        ++it;
        cout << *it;
    }
    else
    {
        cout << "NO";
    }




    return 0;
}
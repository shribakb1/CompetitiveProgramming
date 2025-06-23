/**
 *    author:  shribakb
 *    created: 2025.06.23 06:16:41
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n, h;
    cin >> n >> h;

    vector<int> a(n);
    int count_weight = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] > h)
        {
            count_weight += 2;
        }
        else{
            count_weight += 1;
        }
    }

    cout << count_weight;

    return 0;
}
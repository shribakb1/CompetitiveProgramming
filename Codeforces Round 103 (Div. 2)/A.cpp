/**
 *    author:  shribakb
 *    created: 2025.06.29 20:02:46
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    int min = 100;
    int min_pos = 0;

    int max = 1;
    int max_pos = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (arr[i] <= min)
        {
            min = arr[i];
            min_pos = i;
        }

        if (arr[i] > max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    int moves = max_pos + (n - 1 - min_pos);
    if (max_pos > min_pos) moves--;

    cout << moves << "\n";
    
    return 0;
}
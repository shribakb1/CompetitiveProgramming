/**
 *    author:  shribakb
 *    created: 2025.06.26 20:44:17
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
        cin >> arr[i];

    int max_len = 1;
    int current_len = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] >= arr[i - 1]) {
            current_len++;
        } else {
            max_len = max(max_len, current_len);
            current_len = 1;
        }
    }

    max_len = max(max_len, current_len);

    cout << max_len << "\n";
    return 0;
}
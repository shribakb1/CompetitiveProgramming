/**
 *    author:  shribakb
 *    created: 2025.07.07 03:56:38
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if (k == 1) {
        int min_val = arr[0], pos = 1;
        for (int i = 1; i < n; i++) {
            if (arr[i] < min_val) {
                min_val = arr[i];
                pos = i + 1;
            }
        }
        cout << pos;
    } else {
        int sum = 0;
        for (int i = 0; i < k; i++)
            sum += arr[i];

        int min_sum = sum;
        int pos = 1;

        for (int i = k; i < n; i++) {
            sum = sum - arr[i - k] + arr[i];
            if (sum < min_sum) {
                min_sum = sum;
                pos = i - k + 2;
            }
        }
        cout << pos;
    }

    return 0;
}
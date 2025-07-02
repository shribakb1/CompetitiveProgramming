/**
 *    author:  shribakb
 *    created: 2025.07.03 01:44:02
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<int> arr(4);
    cin >> arr[0];
    cin >> arr[1];
    cin >> arr[2];
    cin >> arr[3];

    sort(arr.begin(), arr.end());

    cout << arr[3] - arr[2] << " " << arr[3] - arr[0] << " " << arr[3] - arr[1]; 

    return 0;
}
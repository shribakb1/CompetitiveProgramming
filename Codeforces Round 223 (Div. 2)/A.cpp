/**
 *    author:  shribakb
 *    created: 2025.07.03 09:09:30
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

    int serega = 0, dima = 0;
    int i = 0, j = n - 1;
    int turn = 0;

    while (i <= j) {
        int pick;
        if (arr[i] > arr[j]) {
            pick = arr[i];
            i++;
        } else {
            pick = arr[j];
            j--;
        }

        if (turn % 2 == 0)
            serega += pick;
        else
            dima += pick;

        turn++;
    }

    cout << serega << " " << dima << "\n";
    return 0;
}

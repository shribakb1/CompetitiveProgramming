/**
 *    author:  shribakb
 *    created: 2025.07.06 17:33:55
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        bool flag = false;
        for(int i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                cout << "YES" << endl;
                cout << 2 << endl << arr[i] << " " << arr[i + 1] << endl;
                flag = true;
                break;
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}

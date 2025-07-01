    /**
     *    author:  shribakb
     *    created: 2025.07.01 17:42:18
    **/
    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(0);

        int t;
        cin >> t;

        while (t--)
        {
            int n, j, k;
            cin >> n >> j >> k;

            vector<int> arr(n);
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            int count = 0;
            
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > arr[j - 1])
                {
                    count++;
                }
            }

            if (count >= k && k == 1)
            {
                cout << "NO";
            }
            else
            {
                cout << "YES";
            }
            
            cout << endl;

        }
        return 0;
    }
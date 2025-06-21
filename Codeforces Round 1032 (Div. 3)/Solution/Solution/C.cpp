/**
 *    author:  shribakb
 *    created: 2025.06.21 19:36:35
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
        int n, m;
        cin >> n >> m;

        vector<vector<int>> arr(n, vector<int>(m));

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        vector<int> max;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                vector<vector<int>> arr2 = arr;
                int max_inner = 0;
                for(int c = 0; c < m; c++)
                {
                    arr2[i][c] -= 1;
                }
                for(int r = 0; r < n; r++)
                {
                    arr2[r][j] -= 1;
                }

                arr2[i][j] += 1;

                for (int i = 0; i < n; i++)
                {
                    for (int j = 0; j < m; j++)
                    {
                        if (arr2[i][j] > max_inner)
                        {
                            max_inner = arr2[i][j];
                        }
                    }
                }

                max.push_back(max_inner);
            }
        }

        int min_value = max[0];
        for (int i = 1; i < max.size(); i++) {
            if (max[i] < min_value) {
                min_value = max[i];
            }
        }
        cout << min_value << '\n';
        
    }

    return 0;
}
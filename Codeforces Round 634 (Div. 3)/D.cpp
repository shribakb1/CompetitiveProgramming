    /**
     *    author:  shribakb
     *    created: 2025.07.17 15:19:34
    **/

    #include <bits/stdc++.h>

    using namespace std;

    int main() {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);

        int t;
        cin >> t;

        while (t--)
        {
            vector<string> s(9);
            for (int i = 0; i < 9; i++) {
            cin >> s[i];
            }
            vector<int> a = {0, 4, 8, 1, 5, 6, 2, 3, 7};
            for (int i = 0; i < 9; i++) {
            int j = a[i];
            s[i][j] = (s[i][j] == '9' ? '1' : s[i][j] + 1);
            }
            for (int i = 0; i < 9; i++) {
            cout << s[i] << '\n';
            }
            cout << '\n';
        }

        return 0;
    }
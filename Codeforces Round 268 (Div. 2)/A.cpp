/**
 *    author:  shribakb
 *    created: 2025.06.29 19:46:13
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int p;
    cin >> p;
    set<int> levels;
    for (int i = 0; i < p; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        levels.insert(x);
    }

    if ((int)levels.size() == n)
        cout << "I become the guy.\n";
    else
        cout << "Oh, my keyboard!\n";

    return 0;
}

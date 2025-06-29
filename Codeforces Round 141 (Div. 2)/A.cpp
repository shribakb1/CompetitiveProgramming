/**
 *    author:  shribakb
 *    created: 2025.06.29 19:08:57
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;

    set<int> colors = {s1, s2, s3, s4};

    int unique = colors.size();
    int need_to_buy = 4 - unique;

    cout << need_to_buy << endl;
    return 0;
}
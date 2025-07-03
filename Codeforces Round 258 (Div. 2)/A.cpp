/**
 *    author:  shribakb
 *    created: 2025.07.04 01:34:50
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m;
    cin >> n >> m;


    int step = min(n,m);
    if (step % 2 == 0)
    {
        cout << "Malvika";
    }
    else
    {
        cout << "Akshat";
    }
    return 0;
}
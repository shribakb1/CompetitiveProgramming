/**
 *    author:  shribakb
 *    created: 2025.06.30 15:48:18
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;

    int count = 0;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "Tetrahedron")
        {
            count += 4;
        }
        else if (str == "Cube")
        {
            count += 6;
        }
        else if (str == "Octahedron")
        {
            count += 8;
        }
        else if (str == "Dodecahedron")
        {
            count += 12;
        }
        else
        {
            count += 20;
        }
    }

    cout << count;
    return 0;
}
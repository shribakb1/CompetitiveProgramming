/**
 *    author:  shribakb
 *    created: 2025.06.23 06:28:57
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int y; 
    cin >> y;


    for (int i = 0; i <= 8001; i++)
    {
        y++;


        int temp = y;
        int a = y % 10;
        y /= 10;
        int b = y % 10;
        y /= 10;
        int c = y % 10;
        y /= 10;
        int d = y % 10;
        if (a != b && a != c && a != d && 
            b != c && b != d && 
            c != a && c != d)
        {
        cout << temp;
        break;
        }

        y = temp;

    }
    return 0;
}
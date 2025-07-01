/**
 *    author:  shribakb
 *    created: 2025.07.01 03:05:27
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
        int n;
        cin >> n;

        int count = 0;
        int power = 1;
        vector<int> round;
        while (n > 0)
        {
            if (n % 10 != 0)
            {
                round.push_back(n % 10 * power);
                count++;
            }
            n /= 10;
            power *= 10;
        }   
        cout << count << endl;
        for (int i = 0; i < round.size(); i++)
            cout << round[i] << " ";
        cout << endl;
    }
    return 0;
}
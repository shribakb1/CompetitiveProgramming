/**
 *    author:  shribakb
 *    created: 2025.06.23 05:36:02
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n; 
    cin >> n;
    
    for (long long i = 1; i <= n; i++)
    {
        long long total_pairs = i * i * (i * i - 1) / 2;

        long long atacking_pairs = 4 * (i - 1) * (i - 2);

        cout << total_pairs - atacking_pairs << std::endl;
    }

    return 0;
}
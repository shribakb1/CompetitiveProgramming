/**
 *    author:  shribakb
 *    created: 2025.06.26 01:02:55
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, a;
    cin >> n >> m >> a;

    long long n_a = n % a == 0 ? n / a : (n / a) + 1;
    long long m_a = m % a == 0? m / a : (m / a) + 1;

    cout << n_a * m_a;
    return 0;
}
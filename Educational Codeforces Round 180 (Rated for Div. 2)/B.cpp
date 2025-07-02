/**
 *    author:  shribakb
 *    created: 2025.06.23 18:02:44
**/
#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(const vector<int>& arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (abs(arr[i] - arr[i + 1]) <= 1)
        {
            return 1;
        }
    }

    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (isBeautiful(arr))
        {
            cout << 0 << endl;
        }


        for (int i = 0; i < n - 1; i++)
        {
            int l = min(arr[i], arr[i + 1]);  
            int r = max(arr[i], arr[i + 1]);  

        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
 
bool isBeautiful(const vector<int>& a) {
    for (int i = 0; i + 1 < a.size(); ++i) {
        if (abs(a[i] - a[i + 1]) <= 1) {
            return true;
        }
    }
    return false;
}
 
int solve(const vector<int>& a) {
    int n = a.size();
 
    if (isBeautiful(a)) return 0;
 
    for (int i = 0; i + 1 < n; ++i) {
        int L = min(a[i], a[i + 1]);
        int R = max(a[i], a[i + 1]);
 
        if (i - 1 >= 0) {
            int v = a[i - 1];
            if (R >= v - 1 && L <= v + 1) return 1;
        }
 
        if (i + 2 < n) {
            int v = a[i + 2];
            if (R >= v - 1 && L <= v + 1) return 1;
        }
    }
 
    return -1;
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        cin >> n;
 
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
 
        cout << solve(a) << '\n';
    }
 
    return 0;
}
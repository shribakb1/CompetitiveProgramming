/**
 *    author:  shribakb
 *    created: 2025.07.03 00:43:41
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);


    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            count++;
        }   
        else if (arr[i] < min)
        {
            min = arr[i];
            count++;
        }
    }

    cout << count;
    return 0;
}
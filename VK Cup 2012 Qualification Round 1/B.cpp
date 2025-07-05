/**
 *    author:  shribakb
 *    created: 2025.07.05 00:48:31
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> arr(n);

    int count = 0;
    int count1 = 0, count2 = 0, count3 = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 4)
        {
            count++;
        }
        else if (arr[i] == 3)
        {
            count3++;
        }
        else if (arr[i] == 2)
        {
            count2++;
        }
        else
        {
            count1++;
        }
    }

    int pair_3_1 = min(count3, count1);
    count += count3;
    count1 -= pair_3_1;

    count += count2 / 2;

    if (count2 % 2)
    {
        count += 1;
        count1 -= min(2, count1);
    }

    if (count1 > 0)
    {
        count += (count1 + 3) / 4;
    }

    cout << count;
    return 0;
}
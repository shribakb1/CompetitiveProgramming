/**
 *    author:  shribakb
 *    created: 2025.07.08 01:30:49
**/
#include <bits/stdc++.h>
using namespace std;


void generateLuckyNumbers(int current_number, vector<int>& luckyNumbers)
{
    if (current_number > 1000)
        return;
    else
    {
        luckyNumbers.push_back(current_number * 10 + 4);
        luckyNumbers.push_back(current_number * 10 + 7);

        generateLuckyNumbers(current_number * 10 + 4, luckyNumbers);
        generateLuckyNumbers(current_number * 10 + 7, luckyNumbers);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> luckyNumbers;

    generateLuckyNumbers(0, luckyNumbers);

    for (int i = 0; i < luckyNumbers.size(); i++)
    {
        if (n % luckyNumbers[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";


    return 0;
}
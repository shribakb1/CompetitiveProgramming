/**
 *    author:  shribakb
 *    created: 2025.06.24 19:29:42
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    const long long mod = 1000003;

    string str;
    cin >> str;

    string result = "";
    for (long long i = 0; i < str.size(); i++)
    {
        if (str[i] == '>')
        {
            result += "1000";
        }
        else if (str[i] == '<')
        {
            result += "1001";
        }
        else if (str[i] == '+')
        {
            result += "1010";
        }
        else if (str[i] == '-')
        {
            result += "1011";
        }
        else if (str[i] == '.')
        {
            result += "1100";
        }
        else if (str[i] == ',')
        {
            result += "1101";
        }
        else if (str[i] == '[')
        {
            result += "1110";
        }
        else
        {
            result += "1111";
        }
    }

    long long numb = 0;
    long long power_of_two = 1; 

    for (long long i = result.size() - 1; i >= 0; i--) {
        long long bit = result[i] - '0'; 
        numb = (numb + bit * power_of_two) % mod;
        power_of_two = (power_of_two * 2) % mod;
    }

    cout << numb;
    return 0;
}
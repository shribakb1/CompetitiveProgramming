/**
 *    author:  shribakb
 *    created: 2025.06.24 20:41:10
**/
#include <bits/stdc++.h>
using namespace std;


// string getBinary(int number)
// {
//     int copy = number;

//     string str = "";

//     while (number > 0)
//     {
//         str += number % 2 + '0';
//         number /= 2;
//     }

//     if (number < 256)
//     {
//         str += '0';
//     }
//     return str;
// }

int reverseBits(int x) {
    int result = 0;
    for (int i = 0; i < 8; i++) {
        result <<= 1;
        result |= (x & 1);
        x >>= 1;
    }
    return result;
}


int getDecimal(string string)
{
    int power_of_two = 1;
    int number = 0;
    for (int i = string.size() - 1; i >= 0; i--)
    {
        int digit = string[i] - '0';
        number += digit * power_of_two;
        power_of_two *= 2;
    }

    return number;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string str;
    getline(cin, str);

    int prev = 0;

    for (int i = 0; i < str.size(); i++)
    {
        int curr = reverseBits((int)str[i]);
        cout << (unsigned)(prev - curr) % 256 << '\n';
        prev = curr;
    }

    return 0;
}
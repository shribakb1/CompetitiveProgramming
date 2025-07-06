/**
 *    author:  shribakb
 *    created: 2025.07.06 16:48:24
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char direction;
    cin >> direction;

    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < keyboard.size(); j++)
        {
            if (direction == 'R')
            {
                if (input[i] == keyboard[j])
                {
                    if (j - 1 < 0)
                    {
                        cout << keyboard[keyboard.size() - 1];
                    }
                    else
                    {
                        cout << keyboard[j - 1];
                    }
                    break;
                }
            }
            else
            {
                if (input[i] == keyboard[j])
                {
                    if (j + 1 == keyboard.size())
                    {
                        cout << keyboard[0];
                    }
                    else
                    {
                        cout << keyboard[j + 1];
                    }
                    break;
                }
            }
        }
    }

    return 0;
}
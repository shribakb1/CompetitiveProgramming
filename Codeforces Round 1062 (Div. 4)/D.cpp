/**
 *    author:  shribakb
 *    created: 2025.11.10 13:15:53
**/

#include <bits/stdc++.h>
using namespace std;

// Function that returns true if n 
// is prime else returns false 
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
  
    // This is checked so that we can skip  
    // middle five numbers in below loop 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
} 

// Function to return the smallest
// prime number greater than N
int nextPrime(int N)
{

    // Base case
    if (N <= 1)
        return 2;

    int prime = N;
    bool found = false;

    // Loop continuously until isPrime returns
    // true for a number greater than n
    while (!found) {
        prime++;

        if (isPrime(prime))
            found = true;
    }

    return prime;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool f = false;
        for (int i = 0; i < n;i++)
        {
            int k = 1;
            do
            {
                if (gcd(a[0], nextPrime(k)) == 1)
                {
                    cout << nextPrime(k) << endl;
                    f = true;
                    break;
                }

                k++;
            } while (k != a[i]);

            if (f)
            break;
            
        }

    }

    return 0;
}
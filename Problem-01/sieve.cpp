/*
Name : Bhupesh Kumar
College Name : NSIT
Year/Department : IV/ICE
E-Mail Id : bhupeshkumar003@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{

    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    SieveOfEratosthenes(n);
    return 0;
}

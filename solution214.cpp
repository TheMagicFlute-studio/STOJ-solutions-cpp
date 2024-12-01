#include <iostream>

using namespace std;

bool primes[1000000]; // 0 is not prime, 1 is prime

void sieve(int n)
{
    for (int i = 2; i <= n; i++)
    {
        primes[i] = 1;
    }

    for (int i = 2; i <= n; i++)
    {
        if (primes[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                primes[j] = 0;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    sieve(10000);
    int n;
    cin >> n;
    int idx = 0;
    while(n)
    {
        if (primes[idx++]) n--;
    }
    cout << idx - 1 << endl;
    
    return 0;
}
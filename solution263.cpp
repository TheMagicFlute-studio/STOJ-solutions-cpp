#include <iostream>

using namespace std;
long long b, p, k;

long long fp(long long n, long long p)
{
    long long ans = 1;
    while(p)
    {
        if(p & 1)
        {
            ans = ans * n % k;
        }
        n = n * n % k;
        p >>= 1;
    }
    return ans;
}

int main(int argc, char *argv[])
{
    cin >> b >> p >> k;
    cout << b << '^' << p << " mod " << k << '=' << fp(b, p) << endl;    
    return 0;
}
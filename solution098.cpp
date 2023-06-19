#include <iostream>

using namespace std;

int gcd(int m, int n)
{
    int a, b, p;

    if(m >= n)
    {
        a = m;
        b = n;
    }
    else
    {
        a = n;
        b = m;
    }

    if(b == 0 || a % b == 0)
    {
        return a;
    }
    else if(b != 0)
    {
        while(a % b != 0)
        {
            p = a % b;
            a = b;
            b = p;
        }
        return b;
    }
}

int lcm(int m, int n)
{
    int a, b, p, x;

    if(m >= n)
    {
        a = m;
        b = n;
    }
    else
    {
        a = n;
        b = m;
    }

    if(b == 0)
    {
        return b;
    }

    else if(b != 0)
    {
        if(a % b == 0)
        {
            return a;
        }

        while(a % b != 0)
        {
            p = a % b;
            a = b;
            b = p;
        }
        
        return m * n / b;
    }
}

int main(int argc, char *argv[])
{
    int m, n;

    cin >> m >> n;

    cout << "gcd = " << gcd(n, n) << endl << "lcm = " << lcm(m, n) << endl;
    
    return 0;
}
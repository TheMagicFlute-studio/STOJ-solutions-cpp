# include <bits/stdc++.h>

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

    if(b == 0)
    {
        return a;
    }
    if(b != 0)
    {
        while(a % b != 0)
        {
            p = a % b;
            a = b;
            b = p;
        }
        return b;
    }
    if(a % b == 0)
    {
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

    if(b != 0)
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

int main(int argc, char** argv)
{
    int a, b;

    cin >> a >> b;

	cout << "gcd = " << gcd(a, b) << endl << "lcm = " << lcm(a, b) << endl;

	return 0;
}
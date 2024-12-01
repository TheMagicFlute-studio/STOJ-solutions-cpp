#include <iostream>

using namespace std;

long long fib(int n)
{
    if (n == 0 || n == 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[])
{
    int n, tmp;
    cin >> n;
    while (n--)
    {
        cin >> tmp;
        cout << fib(tmp) << endl;
    }
    return 0;
}
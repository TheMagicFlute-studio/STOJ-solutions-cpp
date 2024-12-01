#include <iostream>

using namespace std;

long long get_factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * get_factorial(n - 1);
}

long long C(int n, int m)
{
    return get_factorial(n) / (get_factorial(m) * get_factorial(n - m));
}

int main(int argc, char *argv[])
{
    int m, n;
    cin >> n >> m;
    cout << C(n, m) << endl;

    return 0;
}
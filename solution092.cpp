#include <iostream>

using namespace std;

bool is_prime(int num)
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            if (is_prime(i) && is_prime(j) && i + j == n)
            {
                cout << i << "+" << j << endl;
                return 0;
            }
        }
    }
}
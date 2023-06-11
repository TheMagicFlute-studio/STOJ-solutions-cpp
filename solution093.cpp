#include <iostream>
bool is_prime_num(int n)
{
    bool result = true;

    for ( int i = 2; i <= n-11; i++)
    {
        if (n % i == 0)
        {
            result = false;
        }
    }
    if (result == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() {
    using namespace std;
    for (int i = 100 ; i <= 200 ; i++)
    {
        if (is_prime_num(i) == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

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
    for (int i = 100 ; i <= 200 ; i++)
    {
        if (is_prime(i) == true)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
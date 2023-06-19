#include <iostream>

using namespace std;

void print_prime_factor(int num)
{

    for (int i = 2; i <= num; i++)
    {
        while (num % i == 0)
        {
            cout << i;

            num /= i;

            if (num != 1)
            {
                cout << " ";
            }
        }
    }
    cout << endl;
}

int main(int argc, char *argv[])
{
    int n;

    cin >> n;


    print_prime_factor(n);
    
    return 0;
}
#include <iostream>

using namespace std;

bool is_Ugly_num(int n)
{
    if (n == 1)
    {
        return false;
    }

    while (n % 2 == 0)
    {
        n /= 2;
    }
    while (n % 3 == 0)
    {
        n /= 3;
    }
    while (n % 5 == 0)
    {
        n /= 5;
    }

    if (n == 1)
    {
        return true;
    }
    
    return false;
}

int main(int argc, char *argv[])
{
    int n;

    cin >> n;
    
    if (is_Ugly_num(n))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    cout << endl;
    
    return 0;
}
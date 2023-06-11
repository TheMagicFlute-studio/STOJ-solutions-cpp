#include <iostream>

bool is_Ugly_num(int n)
{
    // if (n <= 0)
    // {
    //     return false; // 0和负数都不是丑数
    // }
    if (n == 1)
    {
        return false;
    }
    while (n % 2 == 0) // 不断除以2，直到不能整除为止
    {
        n /= 2;
    }
    while (n % 3 == 0) // 不断除以3，直到不能整除为止
    {
        n /= 3;
    }
    while (n % 5 == 0) // 不断除以5，直到不能整除为止
    {
        n /= 5;
    }
    if (n == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    using namespace std;
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

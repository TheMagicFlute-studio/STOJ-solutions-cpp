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

long long rev(long long n)
{
    long long num = 0;
    while (n)
    {
        num = num * 10 + n % 10;
        n /= 10;
    }
    return num;
}

int main(int argc, char *argv[])
{
    for (int i = 10; i < 100; i++)
    {
        if (is_prime(i) && is_prime(rev(i)))
        {
            cout << i << " ";
        }
    }
    return 0;
}

// solution 2

// #include <iostream>
// #include <cstdio>
// using namespace std;
// int f(int i) // 判断是否为素数
// {
//     for (int j = 2; j < i; j++)
//         if (i % j == 0) // 有因子提前结束
//             return 0;
//     return 1; // 没有因子则返回1
// }
// int main()
// {
//     int t;
//     for (int i = 10; i < 100; i++)             // 2位数
//         if (f(i) && f((i % 10) * 10 + i / 10)) // 是素数且个位十位互换也是素数
//         {
//             cout << i << " "; // 输出这个素数 且回车
//         }
// }

#include <iostream>

using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main(int argc, char *argv[])
{
    int l, r;
    cin >> l >> r;

    int d1, d2, d3, d4, palindrome;

    // 1
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        palindrome = d1;
        if (!isPrime(palindrome))
            continue;
        if (palindrome < l)
            continue;
        if (palindrome > r)
            return 0;
        cout << palindrome << endl;
    }

    // 2
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        palindrome = 10 * d1 + d1;
        if (!isPrime(palindrome))
            continue;
        if (palindrome < l)
            continue;
        if (palindrome > r)
            return 0;
        cout << palindrome << endl;
    }

    // 3
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        for (d2 = 0; d2 <= 9; d2++)
        {
            palindrome = 100 * d1 + 10 * d2 + d1;
            if (!isPrime(palindrome))
                continue;
            if (palindrome < l)
                continue;
            if (palindrome > r)
                return 0;
            cout << palindrome << endl;
        }
    }

    // 4
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        for (d2 = 0; d2 <= 9; d2++)
        {
            palindrome = 1000 * d1 + 100 * d2 + 10 * d2 + d1;
            if (!isPrime(palindrome))
                continue;
            if (palindrome < l)
                continue;
            if (palindrome > r)
                return 0;
            cout << palindrome << endl;
        }
    }

    // 5
    for (d1 = 1; d1 <= 9; d1 += 2)
    { // 只有奇数才会是素数
        for (d2 = 0; d2 <= 9; d2++)
        {
            for (d3 = 0; d3 <= 9; d3++)
            {
                palindrome = 10000 * d1 + 1000 * d2 + 100 * d3 + 10 * d2 + d1; //(处理回文数...)
                if (!isPrime(palindrome))
                    continue;
                if (palindrome < l)
                    continue;
                if (palindrome > r)
                    return 0;
                cout << palindrome << endl;
            }
        }
    }

    // 6
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        for (d2 = 0; d2 <= 9; d2++)
        {
            for (d3 = 0; d3 <= 9; d3++)
            {
                palindrome = 100000 * d1 + 10000 * d2 + 1000 * d3 + 100 * d3 + 10 * d2 + d1;
                if (!isPrime(palindrome))
                    continue;
                if (palindrome < l)
                    continue;
                if (palindrome > r)
                    return 0;
                cout << palindrome << endl;
            }
        }
    }

    // 7
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        for (d2 = 0; d2 <= 9; d2++)
        {
            for (d3 = 0; d3 <= 9; d3++)
            {
                for (d4 = 0; d4 <= 9; d4++)
                {
                    palindrome = 1000000 * d1 + 100000 * d2 + 10000 * d3 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
                    if (!isPrime(palindrome))
                        continue;
                    if (palindrome < l)
                        continue;
                    if (palindrome > r)
                        return 0;
                    cout << palindrome << endl;
                }
            }
        }
    }

    // 8
    for (d1 = 1; d1 <= 9; d1 += 2)
    {
        for (d2 = 0; d2 <= 9; d2++)
        {
            for (d3 = 0; d3 <= 9; d3++)
            {
                for (d4 = 0; d4 <= 9; d4++)
                {
                    palindrome = 10000000 * d1 + 1000000 * d2 + 100000 * d3 + 10000 * d4 + 1000 * d4 + 100 * d3 + 10 * d2 + d1;
                    if (!isPrime(palindrome))
                        continue;
                    if (palindrome < l)
                        continue;
                    if (palindrome > r)
                        return 0;
                    cout << palindrome << endl;
                }
            }
        }
    }

    return 0;
}
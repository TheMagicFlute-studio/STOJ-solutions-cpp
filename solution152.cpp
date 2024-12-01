#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char *argv[])
{
    int n, tmp;
    int flag = 0;
    cin >> n;

    cin >> tmp;
    if (n == 0)
    {
        cout << tmp;
        return 0;
    }
    flag += abs(tmp);
    if (tmp == 1)
        cout << "x^" << n;
    if (tmp == -1)
        cout << "-x^" << n;
    if (tmp < -1)
        cout << '-' << abs(tmp) << "x^" << n;
    if (tmp > 1)
        cout << tmp << "x^" << n;
    while (--n)
    {
        cin >> tmp;
        flag += abs(tmp);
        if (tmp == 0)
            continue;
        if (n == 1)
        {
            if (tmp == 1)
            {
                cout << "+x";
                continue;
            }
            if (tmp == -1)
            {
                cout << "-x";
                continue;
            }
            if (tmp < -1)
            {
                cout << '-' << abs(tmp) << "x";
            }
            if (tmp > 1)
            {
                cout << '+' << abs(tmp) << "x";
            }
            continue;
        }
        if (tmp == 1)
        {
            cout << "+x^" << n;
        }
        if (tmp == -1)
        {
            cout << "-x^" << n;
        }
        if (tmp < -1)
        {
            cout << '-' << abs(tmp) << "x^" << n;
        }
        if (tmp > 1)
        {
            cout << '+' << abs(tmp) << "x^" << n;
        }
    }
    cin >> tmp;
    if (tmp < 0)
        cout << '-';
    if (tmp > 0 && flag)
        cout << '+';
    if (tmp != 0)
        cout << abs(tmp);
    // else if (n == 0 && flag)
    //     cout << "+0";
    // else if(n == 0)
    //     cout << 0;

    return 0;
}
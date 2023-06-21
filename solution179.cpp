#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int sum = 1, n = 10000;

    for (int i = 6; i <= n; ++i)
    {
        int temp = 0;
        for (int j = 1; j < i; ++j)
        {
            if (i % j == 0)
            {
                temp += j;
            }
        }
        if (temp == i)
        {
            cout << temp << " ";
        }
    }
    cout << endl;

    return 0;
}
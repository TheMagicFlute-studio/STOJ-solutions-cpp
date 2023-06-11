#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;

    int cnt = 0;

    for (int i = 2; i <= 500; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0 && i != j)
            {
                break;
            }
            if (j == i)
            {
                // cout << i << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
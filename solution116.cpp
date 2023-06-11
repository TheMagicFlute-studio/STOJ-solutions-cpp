#include <iostream>

int main()
{
    using namespace std;
    int n, x, count = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        int num = i;
        while (num > 0)
        {
            if (num % 10 == x)
            {
                count++;
            }
            num /= 10;
        }
    }
    cout << count << endl;
    return 0;
}

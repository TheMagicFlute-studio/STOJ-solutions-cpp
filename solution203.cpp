#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int num, ans = 0;

    cin >> num;

    while (num > 0)
    {
        ans += num % 10;

        num /= 10;
    }

    cout << ans << endl;
    
    return 0;
}
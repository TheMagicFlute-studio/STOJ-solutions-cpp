#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int k, l, r;
    cin >> k >> l >> r;
    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (i % k == 0 || i % 10 == k) ans += i;
    }
    cout << ans << endl;

    return 0;
}

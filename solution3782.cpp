#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int l, r, ans = 0;
    cin >> l >> r;
    for (int i = l + 1; i < r; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            ans += i;
    }
    cout << ans << endl;

    return 0;
}

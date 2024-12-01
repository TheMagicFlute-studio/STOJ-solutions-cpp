#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int x, m;
    int tmp;
    string ans;
    cin >> x >> m;

    while (x)
    {
        tmp = x % m;
        ans += tmp > 9 ? (char)(tmp - 10 + 'A') : (char)(tmp + '0');
        x /= m;
    }

    for (int i = ans.size() - 1; i >= 0; i--)
        cout << ans[i];

    return 0;
}
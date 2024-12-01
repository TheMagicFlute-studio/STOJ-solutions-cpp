#include <iostream>
#include <algorithm>

using namespace std;

int a[10010];

int main(int argc, char *argv[])
{
    int n, m, target;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (m--)
    {
        cin >> target;
        int pos = upper_bound(a, a + n, target) - a;
        if(pos - 1 >= 0)
        {
            cout << pos << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}
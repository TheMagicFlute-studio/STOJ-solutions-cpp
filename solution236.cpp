#include <iostream>
#include <algorithm>

using namespace std;

int a[10010] = {0};

int main(int argc, char *argv[])
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        int target = k - a[i];
        if (binary_search(a, a + n, target) != 0)
        {
            cout << "yes" << endl;
            return 0;
        }
    }
    if (n == 0)
    {
        cout << "yes" << endl;
        return 0;
    }

    cout << "no" << endl;

    return 0;
}
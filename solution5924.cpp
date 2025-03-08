#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    vector<int> v;
    cin >> n;

    while (n != 1)
    {
        v.push_back(n);
        if (n & 1)
        {
            n = 3 * n + 1;
        }
        else
        {
            n >>= 1;
        }
    }
    v.push_back(1);

    for (int i = v.size() - 1; i >= 0; i--)
    {
        cout << v[i] << " ";
    }

    return 0;
}

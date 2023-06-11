#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n, count = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 10 != 6)
        {
            continue;
        }
        if (i % 8 == 0)
        {
            count++;
        }
    }

    cout << count << endl;
    
    return 0;
}

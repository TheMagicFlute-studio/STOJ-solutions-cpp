#include <bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
    int n, a = 0;

    cin >> n;

    for(n /= 10; n; n /= 10)
    {
        a++;
    }
    a++;

    cout << a << endl;

    return 0;
}
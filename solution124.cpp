#include <iostream>

using namespace std;

long long get(int n)
{
    long long f1 = 1, f2 = 1, f3;
    for (int i = 3; i <= n; i++)
    {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
    }
    return f3;
}

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    cout << get(n) << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

long long add(int n)
{
    if (n == 1)
        return 1;

    return n + add(n - 1);
}

double s(int n)
{
    double sum = 0;
    for (int i = 1; i <= n; i++)
        sum += 1.0 / add(i);
    return sum;
}

int main(int argc, char *argv[])
{
    int n;
    cin >> n;
    cout << s(n) << endl;

    return 0;
}
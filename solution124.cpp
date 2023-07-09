#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    long long i = 0, n, arr[100000];
    
    cin >> n;

    while (n)
    {
        arr[i] = n % 2;
        n /= 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
    {
        cout << arr[j];
    }

    return 0;
}
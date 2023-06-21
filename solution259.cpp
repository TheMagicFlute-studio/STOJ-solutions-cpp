#include <iostream>
#include <algorithm>

using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

int main(int argc, char *argv[])
{
    long long n, i;

    cin >> n;

    long long ls[n];

    for (i = 0; i < n; i++)
    {
        cin >> ls[i];
    }
    sort(ls, ls + i, compare);

    for (i = 0; i < n; i++)
    {
        cout << ls[i] << " ";
    }
    cout << endl;
    
    return 0;
}
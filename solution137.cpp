#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
    int n;

    cin >> n;

    int x[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    sort(x, x + n);

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    cout << endl;
    
    return 0;
}